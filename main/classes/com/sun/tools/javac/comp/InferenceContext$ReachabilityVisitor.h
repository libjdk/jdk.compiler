#ifndef _com_sun_tools_javac_comp_InferenceContext$ReachabilityVisitor_h_
#define _com_sun_tools_javac_comp_InferenceContext$ReachabilityVisitor_h_
//$ class com.sun.tools.javac.comp.InferenceContext$ReachabilityVisitor
//$ extends com.sun.tools.javac.code.Types$UnaryVisitor

#include <com/sun/tools/javac/code/Types$UnaryVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$ClassType;
					class Type$TypeVar;
					class Type$UndetVar;
					class Type$UndetVar$InferenceBound;
					class Type$WildcardType;
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
					class InferenceContext;
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
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Void;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $export InferenceContext$ReachabilityVisitor : public ::com::sun::tools::javac::code::Types$UnaryVisitor {
	$class(InferenceContext$ReachabilityVisitor, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$UnaryVisitor)
public:
	InferenceContext$ReachabilityVisitor();
	void init$(::com::sun::tools::javac::comp::InferenceContext* this$0);
	virtual bool isEquiv(::com::sun::tools::javac::code::Type$UndetVar* from, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* boundKind);
	virtual void scan(::com::sun::tools::javac::util::List* roots);
	using ::com::sun::tools::javac::code::Types$UnaryVisitor::visit;
	virtual ::java::lang::Void* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, ::java::lang::Void* _unused);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* t, Object$* _unused) override;
	virtual ::java::lang::Void* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, ::java::lang::Void* _unused);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* t, Object$* _unused) override;
	virtual ::java::lang::Void* visitType(::com::sun::tools::javac::code::Type* t, ::java::lang::Void* _unused);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* t, Object$* _unused) override;
	virtual ::java::lang::Void* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, ::java::lang::Void* aVoid);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* t, Object$* aVoid) override;
	virtual ::java::lang::Void* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, ::java::lang::Void* _unused);
	virtual $Object* visitUndetVar(::com::sun::tools::javac::code::Type$UndetVar* t, Object$* _unused) override;
	virtual ::java::lang::Void* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, ::java::lang::Void* _unused);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* t, Object$* _unused) override;
	::com::sun::tools::javac::comp::InferenceContext* this$0 = nullptr;
	::java::util::Set* equiv = nullptr;
	::java::util::Set* min = nullptr;
	::java::util::Map* minMap = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_InferenceContext$ReachabilityVisitor_h_