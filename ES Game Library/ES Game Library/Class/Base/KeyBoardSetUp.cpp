#include "KeyBoardSetUp.h"






bool Input::OnPressed(Keys key)
{
	key_buffer = Keyboard->GetBuffer();


	return key_buffer.IsPressed(key);
}

bool Input::KeyReleased(Keys key)
{
	key_buffer = Keyboard->GetBuffer();

	return key_buffer.IsReleased(key);
}

bool Input::KeyUp(Keys key)
{
	key_state = Keyboard->GetBuffer();


	return key_state.IsKeyUp(key);
}

bool Input::KeyDown(Keys key)
{
	key_state = Keyboard->GetBuffer();


	return key_state.IsKeyDown(key);
}
	




