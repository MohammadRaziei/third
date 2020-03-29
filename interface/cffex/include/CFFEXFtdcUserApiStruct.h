/////////////////////////////////////////////////////////////////////////
///@system ��һ��������ϵͳ
///@company �й������ڻ��������ɷ����޹�˾
///@file CFFEXFtdcUserApiStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
/////////////////////////////////////////////////////////////////////////

#if !defined(_FTDCSTRUCT_H)
#define _FTDCSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "CFFEXFtdcUserApiDataType.h"

///��Ϣ�ַ�
struct CFfexFtdcDisseminationField
{
	///����ϵ�к�
	TFfexFtdcSequenceSeriesType	SequenceSeries;
	///���к�
	TFfexFtdcSequenceNoType	SequenceNo;
};
///��Ӧ��Ϣ
struct CFfexFtdcRspInfoField
{
	///�������
	TFfexFtdcErrorIDType	ErrorID;
	///������Ϣ
	TFfexFtdcErrorMsgType	ErrorMsg;
};
///ͨѶ�׶�
struct CFfexFtdcCommPhaseField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///ͨѶʱ�κ�
	TFfexFtdcCommPhaseNoType	CommPhaseNo;
};
///������������
struct CFfexFtdcExchangeTradingDayField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///����������
	TFfexFtdcExchangeIDType	ExchangeID;
};
///����Ự
struct CFfexFtdcSettlementSessionField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
};
///��ǰʱ��
struct CFfexFtdcCurrentTimeField
{
	///��ǰ����
	TFfexFtdcDateType	CurrDate;
	///��ǰʱ��
	TFfexFtdcTimeType	CurrTime;
	///��ǰʱ�䣨���룩
	TFfexFtdcMillisecType	CurrMillisec;
};
///�û���¼����
struct CFfexFtdcReqUserLoginField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///����
	TFfexFtdcPasswordType	Password;
	///�û��˲�Ʒ��Ϣ
	TFfexFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TFfexFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TFfexFtdcProtocolInfoType	ProtocolInfo;
	///�������Ĵ���
	TFfexFtdcDataCenterIDType	DataCenterID;
};
///�û���¼Ӧ��
struct CFfexFtdcRspUserLoginField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///��¼�ɹ�ʱ��
	TFfexFtdcTimeType	LoginTime;
	///��󱾵ر�����
	TFfexFtdcOrderLocalIDType	MaxOrderLocalID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///����ϵͳ����
	TFfexFtdcTradingSystemNameType	TradingSystemName;
	///�������Ĵ���
	TFfexFtdcDataCenterIDType	DataCenterID;
	///��Ա˽������ǰ����
	TFfexFtdcSequenceNoType	PrivateFlowSize;
	///����Ա˽������ǰ����
	TFfexFtdcSequenceNoType	UserFlowSize;
};
///�û��ǳ�����
struct CFfexFtdcReqUserLogoutField
{
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
};
///�û��ǳ�Ӧ��
struct CFfexFtdcRspUserLogoutField
{
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
};
///���뱨��
struct CFfexFtdcInputOrderField
{
	///�������
	TFfexFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///�����۸�����
	TFfexFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TFfexFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TFfexFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TFfexFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TFfexFtdcPriceType	LimitPrice;
	///����
	TFfexFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFfexFtdcTimeConditionType	TimeCondition;
	///GTD����
	TFfexFtdcDateType	GTDDate;
	///�ɽ�������
	TFfexFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFfexFtdcVolumeType	MinVolume;
	///��������
	TFfexFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TFfexFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TFfexFtdcForceCloseReasonType	ForceCloseReason;
	///���ر������
	TFfexFtdcOrderLocalIDType	OrderLocalID;
	///�Զ������־
	TFfexFtdcBoolType	IsAutoSuspend;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
};
///��������
struct CFfexFtdcOrderActionField
{
	///�������
	TFfexFtdcOrderSysIDType	OrderSysID;
	///���ر������
	TFfexFtdcOrderLocalIDType	OrderLocalID;
	///����������־
	TFfexFtdcActionFlagType	ActionFlag;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///�۸�
	TFfexFtdcPriceType	LimitPrice;
	///�����仯
	TFfexFtdcVolumeType	VolumeChange;
	///�������ر��
	TFfexFtdcOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
};
///OTC����
struct CFfexFtdcOTCOrderField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///OTC�������
	TFfexFtdcOTCOrderSysIDType	OTCOrderSysID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��������
	TFfexFtdcDirectionType	Direction;
	///��ƽ��־
	TFfexFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFfexFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TFfexFtdcPriceType	Price;
	///����
	TFfexFtdcVolumeType	Volume;
	///���ַ���Ա����
	TFfexFtdcParticipantIDType	OtherParticipantID;
	///���ַ��ͻ�����
	TFfexFtdcClientIDType	OtherClientID;
	///���ַ������û�����
	TFfexFtdcUserIDType	OtherUserID;
	///���ַ���ƽ��־
	TFfexFtdcOffsetFlagType	OtherOffsetFlag;
	///���ַ��ױ���־
	TFfexFtdcHedgeFlagType	OtherHedgeFlag;
	///����OTC�������
	TFfexFtdcOrderLocalIDType	OTCOrderLocalID;
	///OTC����״̬
	TFfexFtdcOTCOrderStatusType	OTCOrderStatus;
	///����ʱ��
	TFfexFtdcTimeType	InsertTime;
	///����ʱ��
	TFfexFtdcTimeType	CancelTime;
	///�����Ա���
	TFfexFtdcParticipantIDType	ClearingPartID;
	///���ַ������Ա���
	TFfexFtdcParticipantIDType	OtherClearingPartID;
};
///���뱨��
struct CFfexFtdcInputQuoteField
{
	///���۱��
	TFfexFtdcQuoteSysIDType	QuoteSysID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��������
	TFfexFtdcVolumeType	BidVolume;
	///��������
	TFfexFtdcVolumeType	AskVolume;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///���ر��۱��
	TFfexFtdcOrderLocalIDType	QuoteLocalID;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
	///����Ͽ�ƽ��־
	TFfexFtdcCombOffsetFlagType	BidCombOffsetFlag;
	///������ױ���־
	TFfexFtdcCombHedgeFlagType	BidCombHedgeFlag;
	///�򷽼۸�
	TFfexFtdcPriceType	BidPrice;
	///������Ͽ�ƽ��־
	TFfexFtdcCombOffsetFlagType	AskCombOffsetFlag;
	///��������ױ���־
	TFfexFtdcCombHedgeFlagType	AskCombHedgeFlag;
	///�����۸�
	TFfexFtdcPriceType	AskPrice;
};
///���۲���
struct CFfexFtdcQuoteActionField
{
	///���۱��
	TFfexFtdcQuoteSysIDType	QuoteSysID;
	///���ر��۱��
	TFfexFtdcOrderLocalIDType	QuoteLocalID;
	///����������־
	TFfexFtdcActionFlagType	ActionFlag;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///�������ر��
	TFfexFtdcOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
};
///����ִ������
struct CFfexFtdcInputExecOrderField
{
	///��Լ���
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///����ִ��������
	TFfexFtdcOrderLocalIDType	ExecOrderLocalID;
	///����
	TFfexFtdcVolumeType	Volume;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
};
///ִ���������
struct CFfexFtdcExecOrderActionField
{
	///ִ��������
	TFfexFtdcExecOrderSysIDType	ExecOrderSysID;
	///����ִ��������
	TFfexFtdcOrderLocalIDType	ExecOrderLocalID;
	///����������־
	TFfexFtdcActionFlagType	ActionFlag;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///�������ر��
	TFfexFtdcOrderLocalIDType	ActionLocalID;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
};
///�û���¼�˳�
struct CFfexFtdcUserLogoutField
{
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
};
///�û������޸�
struct CFfexFtdcUserPasswordUpdateField
{
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///������
	TFfexFtdcPasswordType	OldPassword;
	///������
	TFfexFtdcPasswordType	NewPassword;
};
///����Ǳ���ϱ���
struct CFfexFtdcInputCombOrderField
{
	///��ϱ������
	TFfexFtdcOrderSysIDType	CombOrderSysID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///�۸�
	TFfexFtdcPriceType	LimitPrice;
	///����
	TFfexFtdcVolumeType	VolumeTotalOriginal;
	///���ر������
	TFfexFtdcOrderLocalIDType	CombOrderLocalID;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
	///��Լ����1
	TFfexFtdcInstrumentIDType	InstrumentID1;
	///��������1
	TFfexFtdcDirectionType	Direction1;
	///���ȳ���1
	TFfexFtdcLegMultipleType	LegMultiple1;
	///��ƽ��־1
	TFfexFtdcOffsetFlagType	OffsetFlag1;
	///Ͷ���ױ���־1
	TFfexFtdcHedgeFlagType	HedgeFlag1;
	///��Լ����2
	TFfexFtdcInstrumentIDType	InstrumentID2;
	///��������2
	TFfexFtdcDirectionType	Direction2;
	///���ȳ���2
	TFfexFtdcLegMultipleType	LegMultiple2;
	///��ƽ��־2
	TFfexFtdcOffsetFlagType	OffsetFlag2;
	///Ͷ���ױ���־2
	TFfexFtdcHedgeFlagType	HedgeFlag2;
	///��Լ����3
	TFfexFtdcInstrumentIDType	InstrumentID3;
	///��������3
	TFfexFtdcDirectionType	Direction3;
	///���ȳ���3
	TFfexFtdcLegMultipleType	LegMultiple3;
	///��ƽ��־3
	TFfexFtdcOffsetFlagType	OffsetFlag3;
	///Ͷ���ױ���־3
	TFfexFtdcHedgeFlagType	HedgeFlag3;
	///��Լ����4
	TFfexFtdcInstrumentIDType	InstrumentID4;
	///��������4
	TFfexFtdcDirectionType	Direction4;
	///���ȳ���4
	TFfexFtdcLegMultipleType	LegMultiple4;
	///��ƽ��־4
	TFfexFtdcOffsetFlagType	OffsetFlag4;
	///Ͷ���ױ���־4
	TFfexFtdcHedgeFlagType	HedgeFlag4;
};
///ǿ���û��˳�
struct CFfexFtdcForceUserExitField
{
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
};
///��Ա�ʽ��ʻ����
struct CFfexFtdcAccountDepositField
{
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///�ʽ��˺�
	TFfexFtdcAccountIDType	Account;
	///�����
	TFfexFtdcMoneyType	Deposit;
};
///������ѯ
struct CFfexFtdcQryOrderField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///�������
	TFfexFtdcOrderSysIDType	OrderSysID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��ʼʱ��
	TFfexFtdcTimeType	TimeStart;
	///����ʱ��
	TFfexFtdcTimeType	TimeEnd;
};
///���۲�ѯ
struct CFfexFtdcQryQuoteField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///���۱��
	TFfexFtdcQuoteSysIDType	QuoteSysID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
};
///�ɽ���ѯ
struct CFfexFtdcQryTradeField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///��ʼ��Լ����
	TFfexFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TFfexFtdcInstrumentIDType	InstIDEnd;
	///�ɽ����
	TFfexFtdcTradeIDType	TradeID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��ʼʱ��
	TFfexFtdcTimeType	TimeStart;
	///����ʱ��
	TFfexFtdcTimeType	TimeEnd;
};
///�����ѯ
struct CFfexFtdcQryMarketDataField
{
	///��Ʒ����
	TFfexFtdcProductIDType	ProductID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
};
///�ͻ���ѯ
struct CFfexFtdcQryClientField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFfexFtdcClientIDType	ClientIDStart;
	///�����ͻ�����
	TFfexFtdcClientIDType	ClientIDEnd;
};
///��Ա�ֲֲ�ѯ
struct CFfexFtdcQryPartPositionField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///��ʼ��Լ����
	TFfexFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TFfexFtdcInstrumentIDType	InstIDEnd;
};
///�ͻ��ֲֲ�ѯ
struct CFfexFtdcQryClientPositionField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFfexFtdcClientIDType	ClientIDStart;
	///�����ͻ�����
	TFfexFtdcClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TFfexFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TFfexFtdcInstrumentIDType	InstIDEnd;
	///�ͻ�����
	TFfexFtdcClientTypeType	ClientType;
};
///�����ʽ��ѯ
struct CFfexFtdcQryPartAccountField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///�ʽ��ʺ�
	TFfexFtdcAccountIDType	AccountID;
};
///��Լ��ѯ
struct CFfexFtdcQryInstrumentField
{
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ʒ�����
	TFfexFtdcProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TFfexFtdcProductIDType	ProductID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
};
///��Լ״̬��ѯ
struct CFfexFtdcQryInstrumentStatusField
{
	///��ʼ��Լ����
	TFfexFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TFfexFtdcInstrumentIDType	InstIDEnd;
};
///������״̬��ѯ
struct CFfexFtdcQrySGDataSyncStatusField
{
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
};
///�û����߲�ѯ
struct CFfexFtdcQryUserSessionField
{
	///��ʼ�����û�����
	TFfexFtdcUserIDType	UserIDStart;
	///���������û�����
	TFfexFtdcUserIDType	UserIDEnd;
};
///�û���ѯ
struct CFfexFtdcQryUserField
{
	///��ʼ�����û�����
	TFfexFtdcUserIDType	UserIDStart;
	///���������û�����
	TFfexFtdcUserIDType	UserIDEnd;
};
///�����ѯ
struct CFfexFtdcQryBulletinField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///�г�����
	TFfexFtdcMarketIDType	MarketID;
	///������
	TFfexFtdcBulletinIDType	BulletinID;
	///��������
	TFfexFtdcNewsTypeType	NewsType;
	///�����̶�
	TFfexFtdcNewsUrgencyType	NewsUrgency;
};
///��Ա��ѯ
struct CFfexFtdcQryParticipantField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
};
///��ֵ��Ȳ�ѯ
struct CFfexFtdcQryHedgeVolumeField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFfexFtdcClientIDType	ClientIDStart;
	///�����ͻ�����
	TFfexFtdcClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TFfexFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TFfexFtdcInstrumentIDType	InstIDEnd;
};
///��Լ��λ��ѯ
struct CFfexFtdcQryMBLMarketDataField
{
	///��ʼ��Լ����
	TFfexFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TFfexFtdcInstrumentIDType	InstIDEnd;
	///��������
	TFfexFtdcDirectionType	Direction;
};
///�����޶��ѯ
struct CFfexFtdcQryCreditLimitField
{
	///���׻�Ա���
	TFfexFtdcParticipantIDType	ParticipantID;
	///�����Ա���
	TFfexFtdcParticipantIDType	ClearingPartID;
};
///�Ǳ���ϱ�����ѯ
struct CFfexFtdcQryCombOrderField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///��ϱ������
	TFfexFtdcOrderSysIDType	CombOrderSysID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
};
///��Ա�ʽ�Ӧ��
struct CFfexFtdcRspPartAccountField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///�ϴν���׼����
	TFfexFtdcMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TFfexFtdcMoneyType	CurrMargin;
	///ƽ��ӯ��
	TFfexFtdcMoneyType	CloseProfit;
	///��ȨȨ������֧
	TFfexFtdcMoneyType	Premium;
	///�����
	TFfexFtdcMoneyType	Deposit;
	///������
	TFfexFtdcMoneyType	Withdraw;
	///�ڻ�����׼����
	TFfexFtdcMoneyType	Balance;
	///�����ʽ�
	TFfexFtdcMoneyType	Available;
	///�ʽ��ʺ�
	TFfexFtdcAccountIDType	AccountID;
	///����ı�֤��
	TFfexFtdcMoneyType	FrozenMargin;
	///�����Ȩ����
	TFfexFtdcMoneyType	FrozenPremium;
	///����׼����
	TFfexFtdcMoneyType	BaseReserve;
};
///��Ա�ֲ�Ӧ��
struct CFfexFtdcRspPartPositionField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TFfexFtdcHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TFfexFtdcPosiDirectionType	PosiDirection;
	///���ճֲ�
	TFfexFtdcVolumeType	YdPosition;
	///���ճֲ�
	TFfexFtdcVolumeType	Position;
	///��ͷ����
	TFfexFtdcVolumeType	LongFrozen;
	///��ͷ����
	TFfexFtdcVolumeType	ShortFrozen;
	///���ն�ͷ����
	TFfexFtdcVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TFfexFtdcVolumeType	YdShortFrozen;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///���׽�ɫ
	TFfexFtdcTradingRoleType	TradingRole;
};
///�ͻ��ֲ�Ӧ��
struct CFfexFtdcRspClientPositionField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TFfexFtdcHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TFfexFtdcPosiDirectionType	PosiDirection;
	///���ճֲ�
	TFfexFtdcVolumeType	YdPosition;
	///���ճֲ�
	TFfexFtdcVolumeType	Position;
	///��ͷ����
	TFfexFtdcVolumeType	LongFrozen;
	///��ͷ����
	TFfexFtdcVolumeType	ShortFrozen;
	///���ն�ͷ����
	TFfexFtdcVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TFfexFtdcVolumeType	YdShortFrozen;
	///������ɽ���
	TFfexFtdcVolumeType	BuyTradeVolume;
	///�������ɽ���
	TFfexFtdcVolumeType	SellTradeVolume;
	///�ֲֳɱ�
	TFfexFtdcMoneyType	PositionCost;
	///���ճֲֳɱ�
	TFfexFtdcMoneyType	YdPositionCost;
	///ռ�õı�֤��
	TFfexFtdcMoneyType	UseMargin;
	///����ı�֤��
	TFfexFtdcMoneyType	FrozenMargin;
	///��ͷ����ı�֤��
	TFfexFtdcMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TFfexFtdcMoneyType	ShortFrozenMargin;
	///�����Ȩ����
	TFfexFtdcMoneyType	FrozenPremium;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
};
///��Լ��ѯӦ��
struct CFfexFtdcRspInstrumentField
{
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TFfexFtdcProductIDType	ProductID;
	///��Ʒ�����
	TFfexFtdcProductGroupIDType	ProductGroupID;
	///������Ʒ����
	TFfexFtdcInstrumentIDType	UnderlyingInstrID;
	///��Ʒ����
	TFfexFtdcProductClassType	ProductClass;
	///�ֲ�����
	TFfexFtdcPositionTypeType	PositionType;
	///ִ�м�
	TFfexFtdcPriceType	StrikePrice;
	///��Ȩ����
	TFfexFtdcOptionsTypeType	OptionsType;
	///��Լ��������
	TFfexFtdcVolumeMultipleType	VolumeMultiple;
	///��Լ������Ʒ����
	TFfexFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TFfexFtdcInstrumentNameType	InstrumentName;
	///�������
	TFfexFtdcYearType	DeliveryYear;
	///������
	TFfexFtdcMonthType	DeliveryMonth;
	///��ǰ�·�
	TFfexFtdcAdvanceMonthType	AdvanceMonth;
	///��ǰ�Ƿ���
	TFfexFtdcBoolType	IsTrading;
	///������
	TFfexFtdcDateType	CreateDate;
	///������
	TFfexFtdcDateType	OpenDate;
	///������
	TFfexFtdcDateType	ExpireDate;
	///��ʼ������
	TFfexFtdcDateType	StartDelivDate;
	///��󽻸���
	TFfexFtdcDateType	EndDelivDate;
	///���ƻ�׼��
	TFfexFtdcPriceType	BasisPrice;
	///�м۵�����µ���
	TFfexFtdcVolumeType	MaxMarketOrderVolume;
	///�м۵���С�µ���
	TFfexFtdcVolumeType	MinMarketOrderVolume;
	///�޼۵�����µ���
	TFfexFtdcVolumeType	MaxLimitOrderVolume;
	///�޼۵���С�µ���
	TFfexFtdcVolumeType	MinLimitOrderVolume;
	///��С�䶯��λ
	TFfexFtdcPriceType	PriceTick;
	///��������Ȼ�˿���
	TFfexFtdcMonthCountType	AllowDelivPersonOpen;
};
///��Ϣ��ѯ
struct CFfexFtdcQryInformationField
{
	///��ʼ��Ϣ����
	TFfexFtdcInformationIDType	InformationIDStart;
	///������Ϣ����
	TFfexFtdcInformationIDType	InformationIDEnd;
};
///��Ϣ��ѯ
struct CFfexFtdcInformationField
{
	///��Ϣ���
	TFfexFtdcInformationIDType	InformationID;
	///���к�
	TFfexFtdcSequenceNoType	SequenceNo;
	///��Ϣ����
	TFfexFtdcContentType	Content;
	///���ĳ���
	TFfexFtdcContentLengthType	ContentLength;
	///�Ƿ����
	TFfexFtdcBoolType	IsAccomplished;
};
///�����޶�
struct CFfexFtdcCreditLimitField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///�ϴν���׼����
	TFfexFtdcMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TFfexFtdcMoneyType	CurrMargin;
	///ƽ��ӯ��
	TFfexFtdcMoneyType	CloseProfit;
	///��ȨȨ������֧
	TFfexFtdcMoneyType	Premium;
	///�����
	TFfexFtdcMoneyType	Deposit;
	///������
	TFfexFtdcMoneyType	Withdraw;
	///�ڻ�����׼����
	TFfexFtdcMoneyType	Balance;
	///�����ʽ�
	TFfexFtdcMoneyType	Available;
	///���׻�Ա���
	TFfexFtdcParticipantIDType	ParticipantID;
	///�����Ա���
	TFfexFtdcParticipantIDType	ClearingPartID;
	///����ı�֤��
	TFfexFtdcMoneyType	FrozenMargin;
	///�����Ȩ����
	TFfexFtdcMoneyType	FrozenPremium;
};
///�ͻ���ѯӦ��
struct CFfexFtdcRspClientField
{
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�ͻ�����
	TFfexFtdcPartyNameType	ClientName;
	///֤������
	TFfexFtdcIdCardTypeType	IdentifiedCardType;
	///ԭ֤������
	TFfexFtdcIdentifiedCardNoV1Type	UseLess;
	///���׽�ɫ
	TFfexFtdcTradingRoleType	TradingRole;
	///�ͻ�����
	TFfexFtdcClientTypeType	ClientType;
	///�Ƿ��Ծ
	TFfexFtdcBoolType	IsActive;
	///��Ա��
	TFfexFtdcParticipantIDType	ParticipantID;
	///֤������
	TFfexFtdcIdentifiedCardNoType	IdentifiedCardNo;
};
///����������
struct CFfexFtdcFlowMessageCancelField
{
	///����ϵ�к�
	TFfexFtdcSequenceSeriesType	SequenceSeries;
	///������
	TFfexFtdcDateType	TradingDay;
	///�������Ĵ���
	TFfexFtdcDataCenterIDType	DataCenterID;
	///������ʼ���к�
	TFfexFtdcSequenceNoType	StartSequenceNo;
	///���˽������к�
	TFfexFtdcSequenceNoType	EndSequenceNo;
};
///��Ա
struct CFfexFtdcParticipantField
{
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///��Ա����
	TFfexFtdcParticipantNameType	ParticipantName;
	///��Ա���
	TFfexFtdcParticipantAbbrType	ParticipantAbbr;
	///��Ա����
	TFfexFtdcMemberTypeType	MemberType;
	///�Ƿ��Ծ
	TFfexFtdcBoolType	IsActive;
};
///�û�
struct CFfexFtdcUserField
{
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///�����û�����
	TFfexFtdcUserTypeType	UserType;
	///����
	TFfexFtdcPasswordType	Password;
	///����ԱȨ��
	TFfexFtdcUserActiveType	IsActive;
};
///�ͻ�
struct CFfexFtdcClientField
{
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�ͻ�����
	TFfexFtdcPartyNameType	ClientName;
	///֤������
	TFfexFtdcIdCardTypeType	IdentifiedCardType;
	///֤������
	TFfexFtdcIdentifiedCardNoType	IdentifiedCardNo;
	///���׽�ɫ
	TFfexFtdcTradingRoleType	TradingRole;
	///�ͻ�����
	TFfexFtdcClientTypeType	ClientType;
	///�Ƿ��Ծ
	TFfexFtdcBoolType	IsActive;
	///�ͻ���������
	TFfexFtdcHedgeFlagType	HedgeFlag;
};
///�û��Ự
struct CFfexFtdcUserSessionField
{
	///ǰ�ñ��
	TFfexFtdcFrontIDType	FrontID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///�����û�����
	TFfexFtdcUserTypeType	UserType;
	///�Ự���
	TFfexFtdcSessionIDType	SessionID;
	///��¼ʱ��
	TFfexFtdcTimeType	LoginTime;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///IP��ַ
	TFfexFtdcIPAddressType	IPAddress;
	///�û��˲�Ʒ��Ϣ
	TFfexFtdcProductInfoType	UserProductInfo;
	///�ӿڶ˲�Ʒ��Ϣ
	TFfexFtdcProductInfoType	InterfaceProductInfo;
	///Э����Ϣ
	TFfexFtdcProtocolInfoType	ProtocolInfo;
};
///��Ʒ��
struct CFfexFtdcProductGroupField
{
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ʒ�����
	TFfexFtdcProductGroupIDType	ProductGroupID;
	///��Ʒ������
	TFfexFtdcProductGroupNameType	ProductGroupName;
	///��Ʒ����
	TFfexFtdcCommodityIDType	CommodityID;
};
///��Ʒ
struct CFfexFtdcProductField
{
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TFfexFtdcProductIDType	ProductID;
	///��Ʒ�����
	TFfexFtdcProductGroupIDType	ProductGroupID;
	///��Ʒ����
	TFfexFtdcProductNameType	ProductName;
	///��Ʒ����
	TFfexFtdcProductClassType	ProductClass;
};
///��Լ
struct CFfexFtdcInstrumentField
{
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ʒ����
	TFfexFtdcProductIDType	ProductID;
	///��Ʒ�����
	TFfexFtdcProductGroupIDType	ProductGroupID;
	///������Ʒ����
	TFfexFtdcInstrumentIDType	UnderlyingInstrID;
	///��Ʒ����
	TFfexFtdcProductClassType	ProductClass;
	///�ֲ�����
	TFfexFtdcPositionTypeType	PositionType;
	///ִ�м�
	TFfexFtdcPriceType	StrikePrice;
	///��Ȩ����
	TFfexFtdcOptionsTypeType	OptionsType;
	///��Լ��������
	TFfexFtdcVolumeMultipleType	VolumeMultiple;
	///��Լ������Ʒ����
	TFfexFtdcUnderlyingMultipleType	UnderlyingMultiple;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��Լ����
	TFfexFtdcInstrumentNameType	InstrumentName;
	///�������
	TFfexFtdcYearType	DeliveryYear;
	///������
	TFfexFtdcMonthType	DeliveryMonth;
	///��ǰ�·�
	TFfexFtdcAdvanceMonthType	AdvanceMonth;
	///��ǰ�Ƿ���
	TFfexFtdcBoolType	IsTrading;
};
///��Ͻ��׺�Լ�ĵ���
struct CFfexFtdcCombinationLegField
{
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///��Ϻ�Լ����
	TFfexFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TFfexFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TFfexFtdcInstrumentIDType	LegInstrumentID;
	///��������
	TFfexFtdcDirectionType	Direction;
	///���ȳ���
	TFfexFtdcLegMultipleType	LegMultiple;
	///�Ƶ�����
	TFfexFtdcImplyLevelType	ImplyLevel;
};
///�˻��ʽ���Ϣ
struct CFfexFtdcAccountInfoField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///�ϴν���׼����
	TFfexFtdcMoneyType	PreBalance;
	///��ǰ��֤���ܶ�
	TFfexFtdcMoneyType	CurrMargin;
	///ƽ��ӯ��
	TFfexFtdcMoneyType	CloseProfit;
	///��ȨȨ������֧
	TFfexFtdcMoneyType	Premium;
	///�����
	TFfexFtdcMoneyType	Deposit;
	///������
	TFfexFtdcMoneyType	Withdraw;
	///�ڻ�����׼����
	TFfexFtdcMoneyType	Balance;
	///�����ʽ�
	TFfexFtdcMoneyType	Available;
	///��������
	TFfexFtdcDateType	DateAccountOpen;
	///�ϴν��������
	TFfexFtdcDateType	PreDate;
	///�Ͻ���ı��
	TFfexFtdcSettlementIDType	PreSettlementID;
	///�ϴα�֤���ܶ�
	TFfexFtdcMoneyType	PreMargin;
	///�ڻ���֤��
	TFfexFtdcMoneyType	FuturesMargin;
	///��Ȩ��֤��
	TFfexFtdcMoneyType	OptionsMargin;
	///�ֲ�ӯ��
	TFfexFtdcMoneyType	PositionProfit;
	///����ӯ��
	TFfexFtdcMoneyType	Profit;
	///��Ϣ����
	TFfexFtdcMoneyType	Interest;
	///������
	TFfexFtdcMoneyType	Fee;
	///����Ѻ���
	TFfexFtdcMoneyType	TotalCollateral;
	///����Ѻ�ֵı�֤����
	TFfexFtdcMoneyType	CollateralForMargin;
	///�ϴ��ʽ���Ϣ����
	TFfexFtdcMoneyType	PreAccmulateInterest;
	///�ʽ���Ϣ����
	TFfexFtdcMoneyType	AccumulateInterest;
	///��Ѻ�����ѻ���
	TFfexFtdcMoneyType	AccumulateFee;
	///�����ʽ�
	TFfexFtdcMoneyType	ForzenDeposit;
	///�ʻ�״̬
	TFfexFtdcAccountStatusType	AccountStatus;
	///�ʽ��ʺ�
	TFfexFtdcAccountIDType	AccountID;
};
///��Ա��Լ�ֲ�
struct CFfexFtdcPartPositionField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TFfexFtdcHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TFfexFtdcPosiDirectionType	PosiDirection;
	///���ճֲ�
	TFfexFtdcVolumeType	YdPosition;
	///���ճֲ�
	TFfexFtdcVolumeType	Position;
	///��ͷ����
	TFfexFtdcVolumeType	LongFrozen;
	///��ͷ����
	TFfexFtdcVolumeType	ShortFrozen;
	///���ն�ͷ����
	TFfexFtdcVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TFfexFtdcVolumeType	YdShortFrozen;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///���׽�ɫ
	TFfexFtdcTradingRoleType	TradingRole;
};
///�ͻ���Լ�ֲ�
struct CFfexFtdcClientPositionField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///Ͷ���ױ���־
	TFfexFtdcHedgeFlagType	HedgeFlag;
	///�ֲֶ�շ���
	TFfexFtdcPosiDirectionType	PosiDirection;
	///���ճֲ�
	TFfexFtdcVolumeType	YdPosition;
	///���ճֲ�
	TFfexFtdcVolumeType	Position;
	///��ͷ����
	TFfexFtdcVolumeType	LongFrozen;
	///��ͷ����
	TFfexFtdcVolumeType	ShortFrozen;
	///���ն�ͷ����
	TFfexFtdcVolumeType	YdLongFrozen;
	///���տ�ͷ����
	TFfexFtdcVolumeType	YdShortFrozen;
	///������ɽ���
	TFfexFtdcVolumeType	BuyTradeVolume;
	///�������ɽ���
	TFfexFtdcVolumeType	SellTradeVolume;
	///�ֲֳɱ�
	TFfexFtdcMoneyType	PositionCost;
	///���ճֲֳɱ�
	TFfexFtdcMoneyType	YdPositionCost;
	///ռ�õı�֤��
	TFfexFtdcMoneyType	UseMargin;
	///����ı�֤��
	TFfexFtdcMoneyType	FrozenMargin;
	///��ͷ����ı�֤��
	TFfexFtdcMoneyType	LongFrozenMargin;
	///��ͷ����ı�֤��
	TFfexFtdcMoneyType	ShortFrozenMargin;
	///�����Ȩ����
	TFfexFtdcMoneyType	FrozenPremium;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
};
///��ֵ�����
struct CFfexFtdcHedgeVolumeField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��ͷ��ֵ������������
	TFfexFtdcVolumeType	LongVolumeOriginal;
	///��ͷ��ֵ������������
	TFfexFtdcVolumeType	ShortVolumeOriginal;
	///��ͷ��ֵ���
	TFfexFtdcVolumeType	LongVolume;
	///��ͷ��ֵ���
	TFfexFtdcVolumeType	ShortVolume;
};
///�г�����
struct CFfexFtdcMarketDataField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///���¼�
	TFfexFtdcPriceType	LastPrice;
	///�����
	TFfexFtdcPriceType	PreSettlementPrice;
	///������
	TFfexFtdcPriceType	PreClosePrice;
	///��ֲ���
	TFfexFtdcLargeVolumeType	PreOpenInterest;
	///����
	TFfexFtdcPriceType	OpenPrice;
	///��߼�
	TFfexFtdcPriceType	HighestPrice;
	///��ͼ�
	TFfexFtdcPriceType	LowestPrice;
	///����
	TFfexFtdcVolumeType	Volume;
	///�ɽ����
	TFfexFtdcMoneyType	Turnover;
	///�ֲ���
	TFfexFtdcLargeVolumeType	OpenInterest;
	///������
	TFfexFtdcPriceType	ClosePrice;
	///�����
	TFfexFtdcPriceType	SettlementPrice;
	///��ͣ���
	TFfexFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TFfexFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TFfexFtdcRatioType	PreDelta;
	///����ʵ��
	TFfexFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TFfexFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TFfexFtdcMillisecType	UpdateMillisec;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
};
///����г�����
struct CFfexFtdcDepthMarketDataField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///���¼�
	TFfexFtdcPriceType	LastPrice;
	///�����
	TFfexFtdcPriceType	PreSettlementPrice;
	///������
	TFfexFtdcPriceType	PreClosePrice;
	///��ֲ���
	TFfexFtdcLargeVolumeType	PreOpenInterest;
	///����
	TFfexFtdcPriceType	OpenPrice;
	///��߼�
	TFfexFtdcPriceType	HighestPrice;
	///��ͼ�
	TFfexFtdcPriceType	LowestPrice;
	///����
	TFfexFtdcVolumeType	Volume;
	///�ɽ����
	TFfexFtdcMoneyType	Turnover;
	///�ֲ���
	TFfexFtdcLargeVolumeType	OpenInterest;
	///������
	TFfexFtdcPriceType	ClosePrice;
	///�����
	TFfexFtdcPriceType	SettlementPrice;
	///��ͣ���
	TFfexFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TFfexFtdcPriceType	LowerLimitPrice;
	///����ʵ��
	TFfexFtdcRatioType	PreDelta;
	///����ʵ��
	TFfexFtdcRatioType	CurrDelta;
	///����޸�ʱ��
	TFfexFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TFfexFtdcMillisecType	UpdateMillisec;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///�����һ
	TFfexFtdcPriceType	BidPrice1;
	///������һ
	TFfexFtdcVolumeType	BidVolume1;
	///������һ
	TFfexFtdcPriceType	AskPrice1;
	///������һ
	TFfexFtdcVolumeType	AskVolume1;
	///����۶�
	TFfexFtdcPriceType	BidPrice2;
	///��������
	TFfexFtdcVolumeType	BidVolume2;
	///�����۶�
	TFfexFtdcPriceType	AskPrice2;
	///��������
	TFfexFtdcVolumeType	AskVolume2;
	///�������
	TFfexFtdcPriceType	BidPrice3;
	///��������
	TFfexFtdcVolumeType	BidVolume3;
	///��������
	TFfexFtdcPriceType	AskPrice3;
	///��������
	TFfexFtdcVolumeType	AskVolume3;
	///�������
	TFfexFtdcPriceType	BidPrice4;
	///��������
	TFfexFtdcVolumeType	BidVolume4;
	///��������
	TFfexFtdcPriceType	AskPrice4;
	///��������
	TFfexFtdcVolumeType	AskVolume4;
	///�������
	TFfexFtdcPriceType	BidPrice5;
	///��������
	TFfexFtdcVolumeType	BidVolume5;
	///��������
	TFfexFtdcPriceType	AskPrice5;
	///��������
	TFfexFtdcVolumeType	AskVolume5;
	///�ϴ���
	TFfexFtdcPriceType	BandingUpperPrice;
	///�´���
	TFfexFtdcPriceType	BandingLowerPrice;
	///��׼��
	TFfexFtdcPriceType	ReferencePrice;
};
///�ּ۱�
struct CFfexFtdcMBLMarketDataField
{
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��������
	TFfexFtdcDirectionType	Direction;
	///�۸�
	TFfexFtdcPriceType	Price;
	///����
	TFfexFtdcVolumeType	Volume;
};
///��������
struct CFfexFtdcAliasDefineField
{
	///��ʼλ��
	TFfexFtdcStartPosType	StartPos;
	///����
	TFfexFtdcAliasType	Alias;
	///ԭ��
	TFfexFtdcOriginalTextType	OriginalText;
};
///�����������
struct CFfexFtdcMarketDataBaseField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///�����
	TFfexFtdcPriceType	PreSettlementPrice;
	///������
	TFfexFtdcPriceType	PreClosePrice;
	///��ֲ���
	TFfexFtdcLargeVolumeType	PreOpenInterest;
	///����ʵ��
	TFfexFtdcRatioType	PreDelta;
};
///���龲̬����
struct CFfexFtdcMarketDataStaticField
{
	///����
	TFfexFtdcPriceType	OpenPrice;
	///��߼�
	TFfexFtdcPriceType	HighestPrice;
	///��ͼ�
	TFfexFtdcPriceType	LowestPrice;
	///������
	TFfexFtdcPriceType	ClosePrice;
	///��ͣ���
	TFfexFtdcPriceType	UpperLimitPrice;
	///��ͣ���
	TFfexFtdcPriceType	LowerLimitPrice;
	///�����
	TFfexFtdcPriceType	SettlementPrice;
	///����ʵ��
	TFfexFtdcRatioType	CurrDelta;
};
///�������³ɽ�����
struct CFfexFtdcMarketDataLastMatchField
{
	///���¼�
	TFfexFtdcPriceType	LastPrice;
	///����
	TFfexFtdcVolumeType	Volume;
	///�ɽ����
	TFfexFtdcMoneyType	Turnover;
	///�ֲ���
	TFfexFtdcLargeVolumeType	OpenInterest;
};
///�������ż�����
struct CFfexFtdcMarketDataBestPriceField
{
	///�����һ
	TFfexFtdcPriceType	BidPrice1;
	///������һ
	TFfexFtdcVolumeType	BidVolume1;
	///������һ
	TFfexFtdcPriceType	AskPrice1;
	///������һ
	TFfexFtdcVolumeType	AskVolume1;
};
///�����������������
struct CFfexFtdcMarketDataBid23Field
{
	///����۶�
	TFfexFtdcPriceType	BidPrice2;
	///��������
	TFfexFtdcVolumeType	BidVolume2;
	///�������
	TFfexFtdcPriceType	BidPrice3;
	///��������
	TFfexFtdcVolumeType	BidVolume3;
};
///������������������
struct CFfexFtdcMarketDataAsk23Field
{
	///�����۶�
	TFfexFtdcPriceType	AskPrice2;
	///��������
	TFfexFtdcVolumeType	AskVolume2;
	///��������
	TFfexFtdcPriceType	AskPrice3;
	///��������
	TFfexFtdcVolumeType	AskVolume3;
};
///���������ġ�������
struct CFfexFtdcMarketDataBid45Field
{
	///�������
	TFfexFtdcPriceType	BidPrice4;
	///��������
	TFfexFtdcVolumeType	BidVolume4;
	///�������
	TFfexFtdcPriceType	BidPrice5;
	///��������
	TFfexFtdcVolumeType	BidVolume5;
};
///���������ġ�������
struct CFfexFtdcMarketDataAsk45Field
{
	///��������
	TFfexFtdcPriceType	AskPrice4;
	///��������
	TFfexFtdcVolumeType	AskVolume4;
	///��������
	TFfexFtdcPriceType	AskPrice5;
	///��������
	TFfexFtdcVolumeType	AskVolume5;
};
///�������ʱ������
struct CFfexFtdcMarketDataUpdateTimeField
{
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///����޸�ʱ��
	TFfexFtdcTimeType	UpdateTime;
	///����޸ĺ���
	TFfexFtdcMillisecType	UpdateMillisec;
};
///����۸񲨶�������
struct CFfexFtdcMarketDataRealPriceBandingField
{
	///�ϴ���
	TFfexFtdcPriceType	BandingUpperPrice;
	///�´���
	TFfexFtdcPriceType	BandingLowerPrice;
	///��׼��
	TFfexFtdcPriceType	ReferencePrice;
};
///����
struct CFfexFtdcQuoteField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///���۱��
	TFfexFtdcQuoteSysIDType	QuoteSysID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��������
	TFfexFtdcVolumeType	BidVolume;
	///��������
	TFfexFtdcVolumeType	AskVolume;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///���ر��۱��
	TFfexFtdcOrderLocalIDType	QuoteLocalID;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
	///����Ͽ�ƽ��־
	TFfexFtdcCombOffsetFlagType	BidCombOffsetFlag;
	///������ױ���־
	TFfexFtdcCombHedgeFlagType	BidCombHedgeFlag;
	///�򷽼۸�
	TFfexFtdcPriceType	BidPrice;
	///������Ͽ�ƽ��־
	TFfexFtdcCombOffsetFlagType	AskCombOffsetFlag;
	///��������ױ���־
	TFfexFtdcCombHedgeFlagType	AskCombHedgeFlag;
	///�����۸�
	TFfexFtdcPriceType	AskPrice;
	///����ʱ��
	TFfexFtdcTimeType	InsertTime;
	///����ʱ��
	TFfexFtdcTimeType	CancelTime;
	///�ɽ�ʱ��
	TFfexFtdcTimeType	TradeTime;
	///�򷽱������
	TFfexFtdcOrderSysIDType	BidOrderSysID;
	///�����������
	TFfexFtdcOrderSysIDType	AskOrderSysID;
	///�����Ա���
	TFfexFtdcParticipantIDType	ClearingPartID;
};
///�ɽ�
struct CFfexFtdcTradeField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///�ɽ����
	TFfexFtdcTradeIDType	TradeID;
	///��������
	TFfexFtdcDirectionType	Direction;
	///�������
	TFfexFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///���׽�ɫ
	TFfexFtdcTradingRoleType	TradingRole;
	///�ʽ��ʺ�
	TFfexFtdcAccountIDType	AccountID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��ƽ��־
	TFfexFtdcOffsetFlagType	OffsetFlag;
	///Ͷ���ױ���־
	TFfexFtdcHedgeFlagType	HedgeFlag;
	///�۸�
	TFfexFtdcPriceType	Price;
	///����
	TFfexFtdcVolumeType	Volume;
	///�ɽ�ʱ��
	TFfexFtdcTimeType	TradeTime;
	///�ɽ�����
	TFfexFtdcTradeTypeType	TradeType;
	///�ɽ�����Դ
	TFfexFtdcPriceSourceType	PriceSource;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///���ر������
	TFfexFtdcOrderLocalIDType	OrderLocalID;
	///�����Ա���
	TFfexFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
};
///����
struct CFfexFtdcOrderField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///�������
	TFfexFtdcOrderSysIDType	OrderSysID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///�����۸�����
	TFfexFtdcOrderPriceTypeType	OrderPriceType;
	///��������
	TFfexFtdcDirectionType	Direction;
	///��Ͽ�ƽ��־
	TFfexFtdcCombOffsetFlagType	CombOffsetFlag;
	///���Ͷ���ױ���־
	TFfexFtdcCombHedgeFlagType	CombHedgeFlag;
	///�۸�
	TFfexFtdcPriceType	LimitPrice;
	///����
	TFfexFtdcVolumeType	VolumeTotalOriginal;
	///��Ч������
	TFfexFtdcTimeConditionType	TimeCondition;
	///GTD����
	TFfexFtdcDateType	GTDDate;
	///�ɽ�������
	TFfexFtdcVolumeConditionType	VolumeCondition;
	///��С�ɽ���
	TFfexFtdcVolumeType	MinVolume;
	///��������
	TFfexFtdcContingentConditionType	ContingentCondition;
	///ֹ���
	TFfexFtdcPriceType	StopPrice;
	///ǿƽԭ��
	TFfexFtdcForceCloseReasonType	ForceCloseReason;
	///���ر������
	TFfexFtdcOrderLocalIDType	OrderLocalID;
	///�Զ������־
	TFfexFtdcBoolType	IsAutoSuspend;
	///������Դ
	TFfexFtdcOrderSourceType	OrderSource;
	///����״̬
	TFfexFtdcOrderStatusType	OrderStatus;
	///��������
	TFfexFtdcOrderTypeType	OrderType;
	///��ɽ�����
	TFfexFtdcVolumeType	VolumeTraded;
	///ʣ������
	TFfexFtdcVolumeType	VolumeTotal;
	///��������
	TFfexFtdcDateType	InsertDate;
	///����ʱ��
	TFfexFtdcTimeType	InsertTime;
	///����ʱ��
	TFfexFtdcTimeType	ActiveTime;
	///����ʱ��
	TFfexFtdcTimeType	SuspendTime;
	///����޸�ʱ��
	TFfexFtdcTimeType	UpdateTime;
	///����ʱ��
	TFfexFtdcTimeType	CancelTime;
	///����޸Ľ����û�����
	TFfexFtdcUserIDType	ActiveUserID;
	///����Ȩ
	TFfexFtdcPriorityType	Priority;
	///��ʱ���Ŷӵ����
	TFfexFtdcTimeSortIDType	TimeSortID;
	///�����Ա���
	TFfexFtdcParticipantIDType	ClearingPartID;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
};
///ִ������
struct CFfexFtdcExecOrderField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///��Լ���
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///����ִ��������
	TFfexFtdcOrderLocalIDType	ExecOrderLocalID;
	///����
	TFfexFtdcVolumeType	Volume;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
	///ִ��������
	TFfexFtdcExecOrderSysIDType	ExecOrderSysID;
	///��������
	TFfexFtdcDateType	InsertDate;
	///����ʱ��
	TFfexFtdcTimeType	InsertTime;
	///����ʱ��
	TFfexFtdcTimeType	CancelTime;
	///ִ�н��
	TFfexFtdcExecResultType	ExecResult;
	///�����Ա���
	TFfexFtdcParticipantIDType	ClearingPartID;
};
///�Ǳ���ϱ���
struct CFfexFtdcCombOrderField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///��ϱ������
	TFfexFtdcOrderSysIDType	CombOrderSysID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///�۸�
	TFfexFtdcPriceType	LimitPrice;
	///����
	TFfexFtdcVolumeType	VolumeTotalOriginal;
	///���ر������
	TFfexFtdcOrderLocalIDType	CombOrderLocalID;
	///ҵ��Ԫ
	TFfexFtdcBusinessUnitType	BusinessUnit;
	///��Լ����1
	TFfexFtdcInstrumentIDType	InstrumentID1;
	///��������1
	TFfexFtdcDirectionType	Direction1;
	///���ȳ���1
	TFfexFtdcLegMultipleType	LegMultiple1;
	///��ƽ��־1
	TFfexFtdcOffsetFlagType	OffsetFlag1;
	///Ͷ���ױ���־1
	TFfexFtdcHedgeFlagType	HedgeFlag1;
	///��Լ����2
	TFfexFtdcInstrumentIDType	InstrumentID2;
	///��������2
	TFfexFtdcDirectionType	Direction2;
	///���ȳ���2
	TFfexFtdcLegMultipleType	LegMultiple2;
	///��ƽ��־2
	TFfexFtdcOffsetFlagType	OffsetFlag2;
	///Ͷ���ױ���־2
	TFfexFtdcHedgeFlagType	HedgeFlag2;
	///��Լ����3
	TFfexFtdcInstrumentIDType	InstrumentID3;
	///��������3
	TFfexFtdcDirectionType	Direction3;
	///���ȳ���3
	TFfexFtdcLegMultipleType	LegMultiple3;
	///��ƽ��־3
	TFfexFtdcOffsetFlagType	OffsetFlag3;
	///Ͷ���ױ���־3
	TFfexFtdcHedgeFlagType	HedgeFlag3;
	///��Լ����4
	TFfexFtdcInstrumentIDType	InstrumentID4;
	///��������4
	TFfexFtdcDirectionType	Direction4;
	///���ȳ���4
	TFfexFtdcLegMultipleType	LegMultiple4;
	///��ƽ��־4
	TFfexFtdcOffsetFlagType	OffsetFlag4;
	///Ͷ���ױ���־4
	TFfexFtdcHedgeFlagType	HedgeFlag4;
	///������Դ
	TFfexFtdcOrderSourceType	OrderSource;
	///��ɽ�����
	TFfexFtdcVolumeType	VolumeTraded;
	///ʣ������
	TFfexFtdcVolumeType	VolumeTotal;
	///��������
	TFfexFtdcDateType	InsertDate;
	///����ʱ��
	TFfexFtdcTimeType	InsertTime;
	///�����Ա���
	TFfexFtdcParticipantIDType	ClearingPartID;
};
///������
struct CFfexFtdcAdminOrderField
{
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///����������
	TFfexFtdcAdminOrderCommandFlagType	AdminOrderCommand;
	///�����Ա���
	TFfexFtdcParticipantIDType	ClearingPartID;
	///���׻�Ա���
	TFfexFtdcParticipantIDType	ParticipantID;
	///���
	TFfexFtdcMoneyType	Amount;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
};
///����������
struct CFfexFtdcInputAdminOrderField
{
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///����������
	TFfexFtdcAdminOrderCommandFlagType	AdminOrderCommand;
	///�����Ա���
	TFfexFtdcParticipantIDType	ClearingPartID;
	///���׻�Ա���
	TFfexFtdcParticipantIDType	ParticipantID;
	///���
	TFfexFtdcMoneyType	Amount;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
};
///����
struct CFfexFtdcBulletinField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///������
	TFfexFtdcBulletinIDType	BulletinID;
	///���к�
	TFfexFtdcSequenceNoType	SequenceNo;
	///��������
	TFfexFtdcNewsTypeType	NewsType;
	///�����̶�
	TFfexFtdcNewsUrgencyType	NewsUrgency;
	///����ʱ��
	TFfexFtdcTimeType	SendTime;
	///��ϢժҪ
	TFfexFtdcAbstractType	Abstract;
	///��Ϣ��Դ
	TFfexFtdcComeFromType	ComeFrom;
	///��Ϣ����
	TFfexFtdcContentType	Content;
	///WEB��ַ
	TFfexFtdcURLLinkType	URLLink;
	///�г�����
	TFfexFtdcMarketIDType	MarketID;
};
///����������ͬ��״̬
struct CFfexFtdcExchangeDataSyncStatusField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///����������
	TFfexFtdcExchangeIDType	ExchangeID;
	///����������ͬ��״̬
	TFfexFtdcExchangeDataSyncStatusType	ExchangeDataSyncStatus;
};
///����������ͬ��״̬
struct CFfexFtdcSGDataSyncStatusField
{
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcDateType	TradingDay;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///����������ͬ��״̬
	TFfexFtdcSGDataSyncStatusType	SGDataSyncStatus;
};
///��Լ״̬
struct CFfexFtdcInstrumentStatusField
{
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��Լ����״̬
	TFfexFtdcInstrumentStatusType	InstrumentStatus;
	///���׽׶α��
	TFfexFtdcTradingSegmentSNType	TradingSegmentSN;
	///���뱾״̬ʱ��
	TFfexFtdcTimeType	EnterTime;
	///���뱾״̬ԭ��
	TFfexFtdcInstStatusEnterReasonType	EnterReason;
};
///�ͻ��ֲֲ�ѯ
struct CFfexFtdcQryClientPositionV1Field
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFfexFtdcClientIDType	ClientIDStart;
	///�����ͻ�����
	TFfexFtdcClientIDType	ClientIDEnd;
	///��ʼ��Լ����
	TFfexFtdcInstrumentIDType	InstIDStart;
	///������Լ����
	TFfexFtdcInstrumentIDType	InstIDEnd;
};
///ѯ��
struct CFfexFtdcInputReqForQuoteField
{
	///ѯ�۱��
	TFfexFtdcQuoteSysIDType	ReqForQuoteID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///��Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��������
	TFfexFtdcTradingDayType	TradingDay;
	///ѯ��ʱ��
	TFfexFtdcTimeType	ReqForQuoteTime;
};
///�������
struct CFfexFtdcMarginCombActionField
{
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�����û�����
	TFfexFtdcUserIDType	UserID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///�������ر��
	TFfexFtdcOrderLocalIDType	ActionLocalID;
	///��Ϻ�Լ����
	TFfexFtdcInstrumentIDType	CombInstrumentID;
	///�������
	TFfexFtdcVolumeType	CombVolume;
	///��϶�������
	TFfexFtdcCombDirectionType	CombDirection;
};
///���ױ�����ϳֲֲ�ѯ
struct CFfexFtdcQryPartClientCombPositionField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFfexFtdcClientIDType	ClientIDStart;
	///�����ͻ�����
	TFfexFtdcClientIDType	ClientIDEnd;
	///��ʼ��Ϻ�Լ����
	TFfexFtdcInstrumentIDType	combInstIDStart;
	///������Ϻ�Լ����
	TFfexFtdcInstrumentIDType	combInstIDEnd;
};
///���ױ�����ϳֲ�
struct CFfexFtdcPartClientCombPositionField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///��Ϻ�Լ����
	TFfexFtdcInstrumentIDType	CombInstrumentID;
	///��ϳֲ�
	TFfexFtdcVolumeType	CombPosition;
	///���һ���ͷŵı�֤��
	TFfexFtdcMoneyType	CombFreeMargin;
};
///��Ϲ���
struct CFfexFtdcMarginCombinationLegField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///��Ϻ�Լ����
	TFfexFtdcInstrumentIDType	CombInstrumentID;
	///���ȱ��
	TFfexFtdcLegIDType	LegID;
	///���Ⱥ�Լ����
	TFfexFtdcInstrumentIDType	LegInstrumentID;
	///��������
	TFfexFtdcDirectionType	Direction;
	///���ȳ���
	TFfexFtdcLegMultipleType	LegMultiple;
	///���ȼ�
	TFfexFtdcPriorityType	Priority;
	///��Ϲ�������
	TFfexFtdcRuleTypeType	RuleType;
};
///���ױ��뵥�ȳֲ�
struct CFfexFtdcQryPartClientLegPositionField
{
	///��ʼ��Ա����
	TFfexFtdcParticipantIDType	PartIDStart;
	///������Ա����
	TFfexFtdcParticipantIDType	PartIDEnd;
	///��ʼ�ͻ�����
	TFfexFtdcClientIDType	ClientIDStart;
	///�����ͻ�����
	TFfexFtdcClientIDType	ClientIDEnd;
	///��ʼ���Ⱥ�Լ����
	TFfexFtdcInstrumentIDType	LegInstIDStart;
	///�������Ⱥ�Լ����
	TFfexFtdcInstrumentIDType	LegInstIDEnd;
};
///���ױ��뵥�ȳֲ�
struct CFfexFtdcPartClientLegPositionField
{
	///������
	TFfexFtdcDateType	TradingDay;
	///���������
	TFfexFtdcSettlementGroupIDType	SettlementGroupID;
	///������
	TFfexFtdcSettlementIDType	SettlementID;
	///��Ա����
	TFfexFtdcParticipantIDType	ParticipantID;
	///�ͻ�����
	TFfexFtdcClientIDType	ClientID;
	///���Ⱥ�Լ����
	TFfexFtdcInstrumentIDType	InstrumentID;
	///��ͷ�ֲ�
	TFfexFtdcVolumeType	LongPosition;
	///��ͷ�ֲ�
	TFfexFtdcVolumeType	ShortPosition;
	///��ͷƽ�ֶ���ֲ�
	TFfexFtdcVolumeType	LongCloseFrozenPosition;
	///��ͷƽ�ֶ���ֲ�
	TFfexFtdcVolumeType	ShortCloseFrozenPosition;
};
///�����ڴ��
struct CFfexFtdcDumpMemTableField
{
	///�ڴ������
	TFfexFtdcTableNameType	TableName;
};
///��������
struct CFfexFtdcFlowControlField
{
	///API��ÿ��ɷ����������������ֵ
	TFfexFtdcCommFluxType	MaxReqCntPerSec;
	///ÿ��������;�������
	TFfexFtdcCommFluxType	OnWayMaxCommFlux;
};


#endif
