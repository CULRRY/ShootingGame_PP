#pragma once

constexpr int32 MAX_BULLET_CAPACITY = 1000;

/// @brief 총알을 발사한 주체를 구분하는 열거형
enum class BulletType
{
	PLAYER,
	ENEMY,
};

struct Bullet
{
	bool		isUse;			///< 배열에서 현재 해당 칸이 사용 중인지에 대한 플래그

	BulletType	type;			///< 총알을 발사한 주체

	int32		y;				///< 총알의 y좌표
	int32		x;				///< 총알의 x좌표
	int32		speed;			///< 총알의 속도 (업데이트되는 프레임 단위)
	int32		frameCount;		///< 속도를 계산하기 위해 프레임을 카운팅 한다.
};

/// @brief 전역으로 관리되는 총알들의 정보를 담은 배열을 초기화 한다.
void InitBulletArray();

/// @brief 총알 배열을 순회하며 총알의 대한 정보를 업데이트한다.
void UpdateBullet();

/// @brief 총알 배열에서 해당 총알을 삭제한다.
/// @param idx 삭제하고자하는 총알의 인덱스
void DeleteBullet(int32 idx);

/// @brief 총알을 생성하여 배열에 추가한다.
/// @param type 총알의 Type(ENEMY, PLAYER)
/// @param y 총알의 y좌표
/// @param x 총알의 x좌표
/// @param speed 총알의 속도
void CreateBullet(const BulletType type, const int32 y, const int32 x, const int32 speed);

/// @brief 총알을 화면에 그린다.
void DrawBullet();