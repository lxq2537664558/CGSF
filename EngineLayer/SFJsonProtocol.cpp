#include "stdafx.h"
#include "SFJsonProtocol.h"
#include "JsonNode.h"
#include "SFJsonPacket.h"
#include "SFProtocol.h"
#include "ISession.h"

SFJsonProtocol::SFJsonProtocol(void)
{
}


SFJsonProtocol::~SFJsonProtocol(void)
{
}

BOOL SFJsonProtocol::AddTransferredData(char* pBuffer, DWORD dwTransferred)
{
	m_builder.PushBuffer(pBuffer, dwTransferred);

	return TRUE;
}

BOOL SFJsonProtocol::Reset()
{
	return TRUE;
}

BOOL SFJsonProtocol::SendRequest(ISession* pSession, BasePacket* pPacket)
{
	SFJsonPacket* pJsonPacket = (SFJsonPacket*)pPacket;
	JsonObjectNode& ObjectNode = pJsonPacket->GetData();

	const int BufferSize = 1024;
	char buffer[BufferSize] = {0,};
	unsigned int writtenSize = JsonBuilder::MakeBuffer(ObjectNode, buffer, BufferSize);
	
	pSession->SendInternal(buffer, writtenSize);

	return TRUE;
}

BasePacket* SFJsonProtocol::GetPacket(int& ErrorCode)
{
	ErrorCode = PACKETIO_ERROR_NONE;
	//SFASSERT(m_builder.PopCompleteNode(dstRootNode));
	SFJsonPacket* pPacket = CreatePacket();

	BOOL bResult = m_builder.PopCompleteNode(pPacket->GetData());

	if(FALSE == bResult)
	{
		//ErrorCode = SFProtocol::eIncompletePacket;
		DisposePacket(pPacket);
		return NULL;
	}
	
	return pPacket;
}

SFJsonPacket* SFJsonProtocol::CreatePacket()
{
	return new SFJsonPacket();
}

BOOL SFJsonProtocol::DisposePacket(SFJsonPacket* pPacket)
{
	delete pPacket;
	return TRUE;
}
