
inline int FrameCount()
{
	static int time = 0;

	return time++;
}