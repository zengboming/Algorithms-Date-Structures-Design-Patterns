/*
    �ļ�����    MyHelloWorldScene.h
    �衡����    HelloWorld����
    �����ˣ�    ��ľͷ_�ӵ��� (���ͣ�http://www.benmutou.com)
*/
#ifndef _MyHelloWorldScene_H_
#define _MyHelloWorldScene_H_

#include "cocos2d.h"
using namespace cocos2d;

class MyHelloWorldScene : public Layer {
public:
    /* ͨ����̬��scene����������һ���������� */
    static Scene* createScene();

    /* MyHelloWorldScene�ĳ�ʼ����������init��ִ�� */
    virtual bool init();

    /* ���ú�CREATE_FUNC����create���� */
    CREATE_FUNC(MyHelloWorldScene);
};

#endif