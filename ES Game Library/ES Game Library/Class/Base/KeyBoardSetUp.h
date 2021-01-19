#include "../../ESGLib.h"



class Input
{
public:
	static Input* GetInstance();
	static void Create();
	static void Destroy();

	bool OnPressed(Keys key);
	bool KeyReleased(Keys key);
	bool KeyUp(Keys key);
	bool KeyDown(Keys key);

	

protected:
	static Input* s_pInstance;
	Input();

private:
	KeyboardState key_state;
	KeyboardBuffer key_buffer;

};



Input* Input::s_pInstance = NULL;


static void Input::Create()
{
	if (!s_pInstance)
	{
		s_pInstance = new Input;
	}

}

static void Input::Destroy()
{
	delete s_pInstance;
	s_pInstance = NULL;

}


	




