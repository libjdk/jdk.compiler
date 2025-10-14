#ifndef _com_sun_tools_javac_code_Preview_h_
#define _com_sun_tools_javac_code_Preview_h_
//$ class com.sun.tools.javac.code.Preview
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Lint;
					class Source;
					class Source$Feature;
					class Symbol;
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
					class Context$Key;
					class JCDiagnostic$DiagnosticPosition;
					class JCDiagnostic$Error;
					class JCDiagnostic$Warning;
					class Log;
					class MandatoryWarningHandler;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Preview : public ::java::lang::Object {
	$class(Preview, 0, ::java::lang::Object)
public:
	Preview();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void checkSourceLevel(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Source$Feature* feature);
	virtual void clear();
	virtual bool declaredUsingPreviewFeature(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Error* disabledError(::com::sun::tools::javac::code::Source$Feature* feature);
	virtual ::com::sun::tools::javac::util::JCDiagnostic$Error* disabledError(::javax::tools::JavaFileObject* classfile, int32_t majorVersion);
	::java::util::Map* initMajorVersionToSourceMap();
	static ::com::sun::tools::javac::code::Preview* instance(::com::sun::tools::javac::util::Context* context);
	virtual bool isEnabled();
	virtual bool isPreview(::com::sun::tools::javac::code::Source$Feature* feature);
	virtual void markUsesPreview(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	virtual void reportDeferredDiagnostics();
	virtual void reportPreviewWarning(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::util::JCDiagnostic$Warning* warnKey);
	virtual bool usesPreview(::javax::tools::JavaFileObject* file);
	virtual void warnPreview(int32_t pos, ::com::sun::tools::javac::code::Source$Feature* feature);
	virtual void warnPreview(::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Source$Feature* feature);
	virtual void warnPreview(::javax::tools::JavaFileObject* classfile, int32_t majorVersion);
	bool enabled = false;
	::com::sun::tools::javac::util::MandatoryWarningHandler* previewHandler = nullptr;
	bool forcePreview = false;
	::java::util::Map* majorVersionToSource = nullptr;
	::java::util::Set* sourcesWithPreviewFeatures = nullptr;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Source* source = nullptr;
	static ::com::sun::tools::javac::util::Context$Key* previewKey;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Preview_h_