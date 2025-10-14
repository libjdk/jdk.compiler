#ifndef _com_sun_tools_javac_comp_Annotate$AnnotationTypeMetadata_h_
#define _com_sun_tools_javac_comp_Annotate$AnnotationTypeMetadata_h_
//$ class com.sun.tools.javac.comp.Annotate$AnnotationTypeMetadata
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("NOT_AN_ANNOTATION_TYPE")
#undef NOT_AN_ANNOTATION_TYPE

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

class $import Annotate$AnnotationTypeMetadata : public ::java::lang::Object {
	$class(Annotate$AnnotationTypeMetadata, 0, ::java::lang::Object)
public:
	Annotate$AnnotationTypeMetadata();
	void init$(::com::sun::tools::javac::code::Symbol$ClassSymbol* metaDataFor, ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter* annotationTypeCompleter);
	virtual void complete();
	virtual ::java::util::Set* getAnnotationElements();
	virtual ::java::util::Set* getAnnotationElementsWithDefault();
	virtual ::com::sun::tools::javac::code::Attribute$Compound* getRepeatable();
	virtual ::com::sun::tools::javac::code::Attribute$Compound* getTarget();
	void init();
	virtual bool isMetadataForAnnotationType();
	static ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata* notAnAnnotationType();
	virtual void setRepeatable(::com::sun::tools::javac::code::Attribute$Compound* repeatable);
	virtual void setTarget(::com::sun::tools::javac::code::Attribute$Compound* target);
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Symbol$ClassSymbol* metaDataFor = nullptr;
	::com::sun::tools::javac::code::Attribute$Compound* target = nullptr;
	::com::sun::tools::javac::code::Attribute$Compound* repeatable = nullptr;
	::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter* annotationTypeCompleter = nullptr;
	static ::com::sun::tools::javac::comp::Annotate$AnnotationTypeMetadata* NOT_AN_ANNOTATION_TYPE;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("NOT_AN_ANNOTATION_TYPE")

#endif // _com_sun_tools_javac_comp_Annotate$AnnotationTypeMetadata_h_