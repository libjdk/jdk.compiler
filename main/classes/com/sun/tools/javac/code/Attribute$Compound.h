#ifndef _com_sun_tools_javac_code_Attribute$Compound_h_
#define _com_sun_tools_javac_code_Attribute$Compound_h_
//$ class com.sun.tools.javac.code.Attribute$Compound
//$ extends com.sun.tools.javac.code.Attribute
//$ implements javax.lang.model.element.AnnotationMirror

#include <com/sun/tools/javac/code/Attribute.h>
#include <javax/lang/model/element/AnnotationMirror.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Visitor;
					class Type;
					class TypeAnnotationPosition;
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
					class List;
					class Name;
					class Pair;
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
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationValueVisitor;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class DeclaredType;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Attribute$Compound : public ::com::sun::tools::javac::code::Attribute, public ::javax::lang::model::element::AnnotationMirror {
	$class(Attribute$Compound, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Attribute, ::javax::lang::model::element::AnnotationMirror)
public:
	Attribute$Compound();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::List* values, ::com::sun::tools::javac::code::TypeAnnotationPosition* position);
	void init$(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::List* values);
	virtual void accept(::com::sun::tools::javac::code::Attribute$Visitor* v) override;
	virtual $Object* accept(::javax::lang::model::element::AnnotationValueVisitor* v, Object$* p) override;
	virtual ::javax::lang::model::type::DeclaredType* getAnnotationType() override;
	::com::sun::tools::javac::util::Pair* getElemPair(::com::sun::tools::javac::util::Name* member);
	virtual ::java::util::Map* getElementValues() override;
	::com::sun::tools::javac::code::Attribute$Compound* getFirstEmbeddedTC();
	virtual ::com::sun::tools::javac::code::TypeAnnotationPosition* getPosition() override;
	virtual $Object* getValue() override;
	virtual bool hasUnknownPosition();
	virtual bool isContainerTypeCompound();
	virtual bool isSynthesized() override;
	virtual ::com::sun::tools::javac::code::Attribute* member(::com::sun::tools::javac::util::Name* member);
	virtual void setSynthesized(bool synthesized);
	virtual $String* toString() override;
	virtual bool tryFixPosition();
	::com::sun::tools::javac::util::List* values = nullptr;
	::com::sun::tools::javac::code::TypeAnnotationPosition* position = nullptr;
	bool synthesized = false;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Attribute$Compound_h_