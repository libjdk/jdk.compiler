#ifndef _com_sun_tools_javac_api_ClientCodeWrapper_h_
#define _com_sun_tools_javac_api_ClientCodeWrapper_h_
//$ class com.sun.tools.javac.api.ClientCodeWrapper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class TaskListener;
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
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Collection;
		class Map;
	}
}
namespace javax {
	namespace tools {
		class Diagnostic;
		class DiagnosticListener;
		class FileObject;
		class JavaFileManager;
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import ClientCodeWrapper : public ::java::lang::Object {
	$class(ClientCodeWrapper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ClientCodeWrapper();
	void init$(::com::sun::tools::javac::util::Context* context);
	static ::com::sun::tools::javac::api::ClientCodeWrapper* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isTrusted(Object$* o);
	virtual ::javax::tools::FileObject* unwrap(::javax::tools::FileObject* fo);
	virtual ::javax::tools::JavaFileObject* unwrap(::javax::tools::JavaFileObject* fo);
	virtual ::com::sun::source::util::TaskListener* unwrap(::com::sun::source::util::TaskListener* l);
	virtual ::java::util::Collection* unwrap(::java::util::Collection* listeners);
	::javax::tools::Diagnostic* unwrap(::javax::tools::Diagnostic* diagnostic);
	virtual ::javax::tools::JavaFileManager* wrap(::javax::tools::JavaFileManager* fm);
	virtual ::javax::tools::FileObject* wrap(::javax::tools::FileObject* fo);
	virtual ::javax::tools::JavaFileObject* wrap(::javax::tools::JavaFileObject* fo);
	virtual ::javax::tools::DiagnosticListener* wrap(::javax::tools::DiagnosticListener* dl);
	virtual ::com::sun::source::util::TaskListener* wrap(::com::sun::source::util::TaskListener* tl);
	virtual ::java::lang::Iterable* wrapJavaFileObjects(::java::lang::Iterable* list);
	$String* wrappedToString($Class* wrapperClass, Object$* wrapped);
	::java::util::Map* trustedClasses = nullptr;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_ClientCodeWrapper_h_