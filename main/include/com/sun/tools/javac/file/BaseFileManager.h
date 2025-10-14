#ifndef _com_sun_tools_javac_file_BaseFileManager_h_
#define _com_sun_tools_javac_file_BaseFileManager_h_
//$ class com.sun.tools.javac.file.BaseFileManager
//$ extends javax.tools.JavaFileManager

#include <java/lang/Array.h>
#include <javax/tools/JavaFileManager.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {
					class BaseFileManager$ByteBufferCache;
					class Locations;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace main {
					class Option;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {
					class Context;
					class Log;
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
		class CharBuffer;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
			class CharsetDecoder;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class Map;
		class Set;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
		class JavaFileObject$Kind;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace file {

class $import BaseFileManager : public ::javax::tools::JavaFileManager {
	$class(BaseFileManager, 0, ::javax::tools::JavaFileManager)
public:
	BaseFileManager();
	using ::javax::tools::JavaFileManager::getClassLoader;
	void init$(::java::nio::charset::Charset* charset);
	virtual void cache(::javax::tools::JavaFileObject* file, ::java::nio::CharBuffer* cb);
	virtual void clear();
	virtual ::com::sun::tools::javac::file::Locations* createLocations();
	virtual ::java::nio::CharBuffer* decode(::java::nio::ByteBuffer* inbuf, bool ignoreEncodingErrors);
	virtual void deferredClose();
	virtual void flushCache(::javax::tools::JavaFileObject* file);
	virtual ::java::nio::CharBuffer* getCachedContent(::javax::tools::JavaFileObject* file);
	virtual ::java::lang::ClassLoader* getClassLoader($Array<::java::net::URL>* urls);
	virtual ::java::nio::charset::CharsetDecoder* getDecoder($String* encodingName, bool ignoreEncodingErrors);
	$String* getDefaultEncodingName();
	virtual $String* getEncodingName();
	static ::javax::tools::JavaFileObject$Kind* getKind(::java::nio::file::Path* path);
	static ::javax::tools::JavaFileObject$Kind* getKind($String* name);
	virtual bool handleOption($String* current, ::java::util::Iterator* remaining) override;
	virtual bool handleOption(::com::sun::tools::javac::main::Option* option, $String* value);
	virtual bool handleOptions(::java::util::Map* map);
	virtual bool isDefaultBootClassPath();
	virtual bool isDefaultSystemModulesPath();
	virtual int32_t isSupportedOption($String* option) override;
	void lambda$clear$0($String* k);
	virtual ::java::nio::ByteBuffer* makeByteBuffer(::java::io::InputStream* in);
	static $Object* nullCheck(Object$* o);
	static ::java::util::Collection* nullCheck(::java::util::Collection* it);
	virtual void recycleByteBuffer(::java::nio::ByteBuffer* bb);
	virtual void setContext(::com::sun::tools::javac::util::Context* context);
	virtual void updateLastUsedTime();
	::com::sun::tools::javac::util::Log* log = nullptr;
	::java::nio::charset::Charset* charset = nullptr;
	::com::sun::tools::javac::util::Options* options = nullptr;
	$String* classLoaderClass = nullptr;
	::com::sun::tools::javac::file::Locations* locations = nullptr;
	bool autoClose = false;
	int64_t lastUsedTime = 0;
	int64_t deferredCloseTimeout = 0;
	static ::java::util::Set* javacFileManagerOptions;
	$String* multiReleaseValue = nullptr;
	$String* encodingName = nullptr;
	$String* defaultEncodingName = nullptr;
	::com::sun::tools::javac::file::BaseFileManager$ByteBufferCache* byteBufferCache = nullptr;
	::java::util::Map* contentCache = nullptr;
};

				} // file
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_file_BaseFileManager_h_