#ifndef _com_sun_tools_javac_code_AnnoConstruct_h_
#define _com_sun_tools_javac_code_AnnoConstruct_h_
//$ class com.sun.tools.javac.code.AnnoConstruct
//$ extends javax.lang.model.AnnotatedConstruct

#include <java/lang/Array.h>
#include <javax/lang/model/AnnotatedConstruct.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class Attribute$Compound;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export AnnoConstruct : public ::javax::lang::model::AnnotatedConstruct {
	$class(AnnoConstruct, $NO_CLASS_INIT, ::javax::lang::model::AnnotatedConstruct)
public:
	AnnoConstruct();
	virtual ::java::util::List* getAnnotationMirrors() override {return nullptr;}
	void init$();
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annoType) override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annoType) override;
	virtual ::com::sun::tools::javac::code::Attribute$Compound* getAttribute($Class* annoType);
	static $Class* getContainer($Class* annoType);
	virtual $Array<::java::lang::annotation::Annotation>* getInheritedAnnotations($Class* annoType);
	static $Array<::com::sun::tools::javac::code::Attribute>* unpackAttributes(::com::sun::tools::javac::code::Attribute$Compound* container);
	$Array<::com::sun::tools::javac::code::Attribute$Compound>* unpackContained(::com::sun::tools::javac::code::Attribute$Compound* container);
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_AnnoConstruct_h_