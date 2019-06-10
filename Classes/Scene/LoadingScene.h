#ifndef __LOADINGSCENE_H__
#define __LOADINGSCENE_H__

#include "cocos2d.h"

USING_NS_CC;

class LoadingScene :public cocos2d::Layer
{
private:

	void LoadingAnimation();

	void changeScene();

public:

	Sprite* _sprLoading;

	static cocos2d::Scene* createScene();

	virtual void onEnterTransitionDidFinish();

	virtual bool init();

	CREATE_FUNC(LoadingScene);
};

#endif // !__LOADINGSCENE_H__