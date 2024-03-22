#include "pch.h"
#include "Demo.h"

#include "TestScene.h"

void Demo::Init(){
	shared_ptr<Scene> scene = make_shared<TestScene>();
	scene->SetSceneName(L"TyestScene");
	//shared_ptr<Scene> scene = make_shared<MainScene>();
	MANAGER_SCENE()->ChangeScene(scene);
}

void Demo::Update()
{

}

void Demo::Render()
{
}
