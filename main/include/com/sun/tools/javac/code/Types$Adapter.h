#ifndef _com_sun_tools_javac_code_Types$Adapter_h_
#define _com_sun_tools_javac_code_Types$Adapter_h_
//$ class com.sun.tools.javac.code.Types$Adapter
//$ extends com.sun.tools.javac.code.Types$SimpleVisitor

#include <com/sun/tools/javac/code/Types$SimpleVisitor.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$ArrayType;
					class Type$ClassType;
					class Type$TypeVar;
					class Type$WildcardType;
					class Types;
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
					class ListBuffer;
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
				namespace code {

class $import Types$Adapter : public ::com::sun::tools::javac::code::Types$SimpleVisitor {
	$class(Types$Adapter, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Types$SimpleVisitor)
public:
	Types$Adapter();
	void init$(::com::sun::tools::javac::code::Types* this$0, ::com::sun::tools::javac::util::ListBuffer* from, ::com::sun::tools::javac::util::ListBuffer* to);
	virtual void adapt(::com::sun::tools::javac::code::Type* source, ::com::sun::tools::javac::code::Type* target);
	void adaptRecursive(::com::sun::tools::javac::code::Type* source, ::com::sun::tools::javac::code::Type* target);
	void adaptRecursive(::com::sun::tools::javac::util::List* source, ::com::sun::tools::javac::util::List* target);
	virtual ::java::lang::Void* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* source, ::com::sun::tools::javac::code::Type* target);
	virtual $Object* visitArrayType(::com::sun::tools::javac::code::Type$ArrayType* source, Object$* target) override;
	virtual ::java::lang::Void* visitClassType(::com::sun::tools::javac::code::Type$ClassType* source, ::com::sun::tools::javac::code::Type* target);
	virtual $Object* visitClassType(::com::sun::tools::javac::code::Type$ClassType* source, Object$* target) override;
	virtual ::java::lang::Void* visitType(::com::sun::tools::javac::code::Type* source, ::com::sun::tools::javac::code::Type* target);
	virtual $Object* visitType(::com::sun::tools::javac::code::Type* source, Object$* target) override;
	virtual ::java::lang::Void* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* source, ::com::sun::tools::javac::code::Type* target);
	virtual $Object* visitTypeVar(::com::sun::tools::javac::code::Type$TypeVar* source, Object$* target) override;
	virtual ::java::lang::Void* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* source, ::com::sun::tools::javac::code::Type* target);
	virtual $Object* visitWildcardType(::com::sun::tools::javac::code::Type$WildcardType* source, Object$* target) override;
	::com::sun::tools::javac::code::Types* this$0 = nullptr;
	::com::sun::tools::javac::util::ListBuffer* from = nullptr;
	::com::sun::tools::javac::util::ListBuffer* to = nullptr;
	::java::util::Map* mapping = nullptr;
	::java::util::Set* cache = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Types$Adapter_h_