#ifndef _com_sun_tools_javac_util_BasicDiagnosticFormatter$BasicConfiguration_h_
#define _com_sun_tools_javac_util_BasicDiagnosticFormatter$BasicConfiguration_h_
//$ class com.sun.tools.javac.util.BasicDiagnosticFormatter$BasicConfiguration
//$ extends com.sun.tools.javac.util.AbstractDiagnosticFormatter$SimpleConfiguration

#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$SimpleConfiguration.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace api {
					class DiagnosticFormatter$Configuration$DiagnosticPart;
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
					class BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind;
					class BasicDiagnosticFormatter$BasicConfiguration$SourcePosition;
					class Options;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $import BasicDiagnosticFormatter$BasicConfiguration : public ::com::sun::tools::javac::util::AbstractDiagnosticFormatter$SimpleConfiguration {
	$class(BasicDiagnosticFormatter$BasicConfiguration, $NO_CLASS_INIT, ::com::sun::tools::javac::util::AbstractDiagnosticFormatter$SimpleConfiguration)
public:
	BasicDiagnosticFormatter$BasicConfiguration();
	void init$(::com::sun::tools::javac::util::Options* options);
	void init$();
	virtual $String* getFormat(::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* kind);
	virtual int32_t getIndentation(::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart* diagPart);
	virtual ::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* getSourcePosition();
	void initFormat();
	void initFormats($String* pos, $String* nopos, $String* clazz);
	void initFormats($String* fmt);
	void initIndentation();
	void initOldFormat();
	virtual void setFormat(::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$BasicFormatKind* kind, $String* s);
	virtual void setIndentation(::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart* diagPart, int32_t nSpaces);
	virtual void setSourcePosition(::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* sourcePos);
	::java::util::Map* indentationLevels = nullptr;
	::java::util::Map* availableFormats = nullptr;
	::com::sun::tools::javac::util::BasicDiagnosticFormatter$BasicConfiguration$SourcePosition* sourcePosition = nullptr;
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_BasicDiagnosticFormatter$BasicConfiguration_h_