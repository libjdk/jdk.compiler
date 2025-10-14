#ifndef _com_sun_tools_javac_code_TypeAnnotations_h_
#define _com_sun_tools_javac_code_TypeAnnotations_h_
//$ class com.sun.tools.javac.code.TypeAnnotations
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class Attribute$Compound;
					class Symbol;
					class Symbol$TypeSymbol;
					class Symtab;
					class TypeAnnotations$AnnotationType;
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
					class Annotate;
					class Attr;
					class Env;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {
					class JCTree$JCClassDecl;
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
					class List;
					class Log;
					class Names;
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export TypeAnnotations : public ::java::lang::Object {
	$class(TypeAnnotations, 0, ::java::lang::Object)
public:
	TypeAnnotations();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* annotationTargetType(::com::sun::tools::javac::code::Attribute$Compound* a, ::com::sun::tools::javac::code::Symbol* s);
	virtual ::com::sun::tools::javac::util::List* annotationTargets(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym);
	::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* combineAnnotationType(::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* at1, ::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* at2);
	static ::com::sun::tools::javac::code::TypeAnnotations* instance(::com::sun::tools::javac::util::Context* context);
	::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* lambda$annotationTargetType$3(::com::sun::tools::javac::code::Symbol* s, ::com::sun::tools::javac::code::Attribute* attr);
	static bool lambda$annotationTargets$2(::com::sun::tools::javac::code::Attribute* a);
	void lambda$organizeTypeAnnotationsSignatures$0(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	void lambda$validateTypeAnnotationsSignatures$1(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	virtual void organizeTypeAnnotationsBodies(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	virtual void organizeTypeAnnotationsSignatures(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	::com::sun::tools::javac::code::TypeAnnotations$AnnotationType* targetToAnnotationType(::com::sun::tools::javac::code::Attribute* a, ::com::sun::tools::javac::code::Symbol* s);
	virtual void validateTypeAnnotationsSignatures(::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree);
	static ::com::sun::tools::javac::util::Context$Key* typeAnnosKey;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_TypeAnnotations_h_