#include <iostream>

#include "../src/osplatformutil.h"

using namespace std;
 
int main()
{
#if defined I_OS_MAC

	cout<<"this is MAC"<<endl;

#elif defined I_OS_ANDROID

	cout<<"this is android"<<endl;

#elif defined I_OS_WIN32

	cout<<"this is windows"<<endl;
	
#elif defined I_OS_CYGWIN

	cout<<"this is cygwin"<<endl;

#elif defined I_OS_SOLARIS

	cout<<"this is sun os"<<endl;

#elif defined I_OS_LINUX

	cout<<"this is linux"<<endl;

#elif defined I_OS_FREEBSD

	cout<<"this is freeBSD"<<endl;

#elif defined I_OS_OPENBSD

	cout<<"this is openBSD"<<endl;

#elif defined I_OS_AIX

	cout<<"this is aix"<<endl;

#else

	cout<<"unknown os"<<endl;

#endif

	return 0;

}
