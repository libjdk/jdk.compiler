#ifndef _com_sun_tools_javac_code_Type$UndetVar_h_
#define _com_sun_tools_javac_code_Type$UndetVar_h_
//$ class com.sun.tools.javac.code.Type$UndetVar
//$ extends com.sun.tools.javac.code.Type$DelegatedType

#include <com/sun/tools/javac/code/Type$DelegatedType.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Type;
					class Type$TypeVar;
					class Type$UndetVar$InferenceBound;
					class Type$UndetVar$Kind;
					class Type$UndetVar$UndetVarListener;
					class Type$Visitor;
					class TypeMetadata;
					class Types;
					class Types$TypeMapping;
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
	namespace util {
		class ArrayDeque;
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Type$UndetVar : public ::com::sun::tools::javac::code::Type$DelegatedType {
	$class(Type$UndetVar, $NO_CLASS_INIT, ::com::sun::tools::javac::code::Type$DelegatedType)
public:
	Type$UndetVar();
	using ::com::sun::tools::javac::code::Type$DelegatedType::accept;
	void init$(::com::sun::tools::javac::code::Type$TypeVar* origin, ::com::sun::tools::javac::code::Type$UndetVar$UndetVarListener* listener, ::com::sun::tools::javac::code::Types* types);
	virtual $Object* accept(::com::sun::tools::javac::code::Type$Visitor* v, Object$* s) override;
	void addBound(::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, ::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::Types* types);
	void addBound(::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, ::com::sun::tools::javac::code::Type* bound, ::com::sun::tools::javac::code::Types* types, bool update);
	virtual ::com::sun::tools::javac::code::Type* baseType() override;
	virtual ::com::sun::tools::javac::code::Type$UndetVar* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* md) override;
	virtual $String* debugString();
	virtual ::com::sun::tools::javac::code::Type$UndetVar* dup(::com::sun::tools::javac::code::Types* types);
	virtual void dupTo(::com::sun::tools::javac::code::Type$UndetVar* uv2, ::com::sun::tools::javac::code::Types* types);
	virtual ::com::sun::tools::javac::util::List* getBounds($Array<::com::sun::tools::javac::code::Type$UndetVar$InferenceBound>* ibs);
	virtual ::com::sun::tools::javac::util::List* getDeclaredBounds();
	virtual ::com::sun::tools::javac::code::Type* getInst();
	bool isCaptured();
	virtual bool isPartial() override;
	bool isThrows();
	void lambda$substBounds$0(::com::sun::tools::javac::util::ListBuffer* boundsChanged, ::com::sun::tools::javac::code::Type$UndetVar* uv, ::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, ::com::sun::tools::javac::code::Type* t, bool _ignored);
	void notifyBoundChange(::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, ::com::sun::tools::javac::code::Type* bound, bool update);
	virtual void setBounds(::com::sun::tools::javac::code::Type$UndetVar$InferenceBound* ib, ::com::sun::tools::javac::util::List* newBounds);
	virtual void setInst(::com::sun::tools::javac::code::Type* inst);
	virtual void setThrow();
	virtual void substBounds(::com::sun::tools::javac::util::List* from, ::com::sun::tools::javac::util::List* to, ::com::sun::tools::javac::code::Types* types);
	virtual $String* toString() override;
	::java::util::ArrayDeque* incorporationActions = nullptr;
	::java::util::Map* bounds = nullptr;
	::com::sun::tools::javac::code::Type* inst = nullptr;
	int32_t declaredCount = 0;
	::com::sun::tools::javac::code::Type$UndetVar$UndetVarListener* listener = nullptr;
	::com::sun::tools::javac::code::Type$UndetVar$Kind* kind = nullptr;
	::com::sun::tools::javac::code::Types$TypeMapping* toTypeVarMap = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type$UndetVar_h_