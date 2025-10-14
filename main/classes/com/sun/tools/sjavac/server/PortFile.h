#ifndef _com_sun_tools_sjavac_server_PortFile_h_
#define _com_sun_tools_sjavac_server_PortFile_h_
//$ class com.sun.tools.sjavac.server.PortFile
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
		class RandomAccessFile;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel;
			class FileLock;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class Semaphore;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace server {

class PortFile : public ::java::lang::Object {
	$class(PortFile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PortFile();
	void init$($String* fn);
	virtual bool containsPortInfo();
	virtual void delete$();
	virtual bool exists();
	virtual int64_t getCookie();
	virtual $String* getFilename();
	virtual int32_t getPort();
	int64_t getServerStartupTimeoutSeconds();
	virtual void getValues();
	void initializeChannel();
	virtual void lock();
	virtual bool markedForStop();
	virtual void setValues(int32_t port, int64_t cookie);
	virtual bool stillMyValues();
	virtual void unlock();
	virtual void waitForValidValues();
	static const int32_t magicNr = 4468;
	$String* filename = nullptr;
	::java::io::File* file = nullptr;
	::java::io::File* stopFile = nullptr;
	::java::io::RandomAccessFile* rwfile = nullptr;
	::java::nio::channels::FileChannel* channel = nullptr;
	::java::nio::channels::FileLock* lock$ = nullptr;
	::java::util::concurrent::Semaphore* lockSem = nullptr;
	bool containsPortInfo$ = false;
	int32_t serverPort = 0;
	int64_t serverCookie = 0;
	int32_t myServerPort = 0;
	int64_t myServerCookie = 0;
};

				} // server
			} // sjavac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_sjavac_server_PortFile_h_