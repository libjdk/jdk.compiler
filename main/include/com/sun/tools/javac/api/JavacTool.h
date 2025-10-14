#ifndef _com_sun_tools_javac_api_JavacTool_h_
#define _com_sun_tools_javac_api_JavacTool_h_
//$ class com.sun.tools.javac.api.JavacTool
//$ extends javax.tools.JavaCompiler

#include <java/lang/Array.h>
#include <javax/tools/JavaCompiler.h>

namespace com {
	namespace sun {
		namespace source {
			namespace util {
				class JavacTask;
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
	namespace io {
		class InputStream;
		class OutputStream;
		class Writer;
	}
}
namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Locale;
		class Set;
	}
}
namespace javax {
	namespace tools {
		class DiagnosticListener;
		class JavaCompiler$CompilationTask;
		class JavaFileManager;
		class StandardJavaFileManager;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {

class $import JavacTool : public ::javax::tools::JavaCompiler {
	$class(JavacTool, $NO_CLASS_INIT, ::javax::tools::JavaCompiler)
public:
	JavacTool();
	void init$();
	static ::com::sun::tools::javac::api::JavacTool* create();
	virtual ::java::util::Set* getSourceVersions() override;
	virtual ::javax::tools::StandardJavaFileManager* getStandardFileManager(::javax::tools::DiagnosticListener* diagnosticListener, ::java::util::Locale* locale, ::java::nio::charset::Charset* charset) override;
	virtual ::javax::tools::JavaCompiler$CompilationTask* getTask(::java::io::Writer* out, ::javax::tools::JavaFileManager* fileManager, ::javax::tools::DiagnosticListener* diagnosticListener, ::java::lang::Iterable* options, ::java::lang::Iterable* classes, ::java::lang::Iterable* compilationUnits) override;
	::com::sun::source::util::JavacTask* getTask(::java::io::Writer* out, ::javax::tools::JavaFileManager* fileManager, ::javax::tools::DiagnosticListener* diagnosticListener, ::java::lang::Iterable* options, ::java::lang::Iterable* classes, ::java::lang::Iterable* compilationUnits, ::com::sun::tools::javac::util::Context* context);
	virtual int32_t isSupportedOption($String* option) override;
	virtual $String* name() override;
	virtual int32_t run(::java::io::InputStream* in, ::java::io::OutputStream* out, ::java::io::OutputStream* err, $StringArray* arguments) override;
};

				} // api
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_api_JavacTool_h_