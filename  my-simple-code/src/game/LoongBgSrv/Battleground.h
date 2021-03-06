
#ifndef GAME_BATTLEGROUND_H_
#define GAME_BATTLEGROUND_H_

#include <mysdk/base/Common.h>

#include <game/LoongBgSrv/scene/Scene.h>
#include <game/LoongBgSrv/BattlegroundState.h>
#include <game/LoongBgSrv/BgUnit.h>

typedef enum tagBgResultE
{
			KNONE_BGRESULT	=	0,
			KBLACK_BGRESULT	=	1, //暗黑军胜利
			KWHITE_BGRESULT	= 2,// 烈阳军胜利
			KDRAW_BGRESULT	= 3, // 平局
}BgResultE;

class BgPlayer;
class LoongBgSrv;
class Battleground
{
public:
	// 最大队伍人数
	static const uint8 sMaxTeamNum = 5;
	//
	static const uint8 sMinTeamNum  = 0;
public:
	Battleground();
	~Battleground();

	void setSrv(LoongBgSrv* srv);

	void setId(int32 Id);
	int32 getId();
	uint8 getBlackNum()
	{
		return teamNum_[BgUnit::kBlack_TEAM];
	}
	uint8 getWhiteNum()
	{
		return teamNum_[BgUnit::kWhite_TEAM];
	}

	bool addBgPlayer(BgPlayer* player, BgUnit::TeamE team);
	bool removeBgPlayer(BgPlayer* player, BgUnit::TeamE team);

	void run(int64 curTime);
	void shtudown();

	bool getBgInfo(PacketBase& op);

	BattlegroundState::BgStateE getState();
	uint32 getLeftTime();

	BgUnit* getTargetUnit(int32 playerId, int32 uintType);

	// 告诉客户端 敌方人数不足 战场关闭
	void TellClientCloseBg(int32 state);
//

	void broadMsg(PacketBase& op);
	void setResult(BgResultE bgResult)
	{
		bgResult_ = bgResult;
	}
public:
	// 战场释放结束啦
	bool isGameOver();
	// 战场结束结算
	void settlement();
	void incBgPlayerTimes();
	void tellClientBgState();
	bool isFull();
	bool isEmpty();

	bool haveOtherTeamEmpty();

    void switchWaitState();
    void switchCountDownState();
    void switchStartState();
    void switchRunState();
    void switchExitState();
    void closeBattleground();

private:
    void init();
    // 战场状态切换
    void setBattlegroundState(BattlegroundState* state);
    void TellPhpBattleInfo();

    void sendToHotel(PacketBase& pb);
private:
	int32 id_; // 战场ID
	uint8 teamNum_[BgUnit::kCOUNT_TEAM];
	bool bFirst_;
	BgResultE bgResult_;
	BattlegroundState* pState_;
	Scene scene_; //战场所在场景 目前只支持一个战场地图哦

	LoongBgSrv* pSrv_;
private:
	DISALLOW_COPY_AND_ASSIGN(Battleground);
};

#endif /* BATTLEGROUND_H_ */
