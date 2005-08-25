#include "CBase.h"

#ifdef _WIN32
#undef main
#endif

int main()
{
	CBase lw;
	lw.run();

	return 0;
}
