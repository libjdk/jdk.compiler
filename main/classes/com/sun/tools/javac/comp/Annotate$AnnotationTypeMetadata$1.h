#ifndef _com_sun_tools_javac_comp_Annotate$AnnotationTypeMetadata$1_h_
#define _com_sun_tools_javac_comp_Annotate$AnnotationTypeMetadata$1_h_
//$ class com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata$1
//$ extends com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata

#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Symbol$ClassSymbol;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {
					class Annotate$AnnotationTypeCompleter;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Annotate$AnnotationTypeMetadata$1 : public ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata {
	$class(Annotate$AnnotationTypeMetadata$1, $NO_CLASS_INIT, ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata)
public:
	Annotate$AnnotationTypeMetadata$1();
	void init$(::com::sun::tools::javac::code::Symbol$ClassSymbol* metaDataFor, ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter* annotationTypeCompleter);
	virtual void complete() override;
	virtual ::java::util::Set* getAnnotationElements() override;
	virtual ::java::util::Set* getAnnotationElementsWithDefault() override;
	virtual ::com::sun::tools::javac::code::Attribute$Compound* getRepeatable() override;
	virtual ::com::sun::tools::javac::code::Attribute$Compound* getTarget() override;
	virtual bool isMetadataForAnnotationType() override;
	virtual $String* toString() override;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Annotate$AnnotationTypeMetadata$1_h_