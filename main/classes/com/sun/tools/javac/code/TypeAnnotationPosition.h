#ifndef _com_sun_tools_javac_code_TypeAnnotationPosition_h_
#define _com_sun_tools_javac_code_TypeAnnotationPosition_h_
//$ class com.sun.tools.javac.code.TypeAnnotationPosition
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class TargetType;
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
					class JCTree$JCLambda;
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
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export TypeAnnotationPosition : public ::java::lang::Object {
	$class(TypeAnnotationPosition, 0, ::java::lang::Object)
public:
	TypeAnnotationPosition();
	void init$(::com::sun::tools::javac::code::TargetType* ttype, int32_t pos, int32_t parameter_index, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t type_index, int32_t bound_index, ::com::sun::tools::javac::util::List* location);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* classExtends(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* classExtends(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* classExtends(::com::sun::tools::javac::util::List* location, int32_t type_index);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* classExtends(int32_t type_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* classExtends(int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* constructorInvocationTypeArg(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* constructorInvocationTypeArg(::com::sun::tools::javac::util::List* location, int32_t type_index);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* constructorRef(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* constructorRef(::com::sun::tools::javac::util::List* location);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* constructorRefTypeArg(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* constructorRefTypeArg(::com::sun::tools::javac::util::List* location, int32_t type_index);
	virtual bool emitToClassfile();
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* exceptionParameter(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* exceptionParameter(::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* exceptionParameter(::com::sun::tools::javac::util::List* location);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* field(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* field(::com::sun::tools::javac::util::List* location);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* field(int32_t pos);
	static ::com::sun::tools::javac::util::List* getBinaryFromTypePath(::java::util::List* locs);
	virtual int32_t getCatchType();
	virtual int32_t getExceptionIndex();
	virtual int32_t getStartPos();
	static ::com::sun::tools::javac::util::List* getTypePathFromBinary(::java::util::List* list);
	virtual bool hasCatchType();
	virtual bool hasExceptionIndex();
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* instanceOf(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* instanceOf(::com::sun::tools::javac::util::List* location);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* localVariable(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* localVariable(::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* localVariable(::com::sun::tools::javac::util::List* location);
	virtual bool matchesPos(int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodInvocationTypeArg(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodInvocationTypeArg(::com::sun::tools::javac::util::List* location, int32_t type_index);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodParameter(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodParameter(::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodParameter(int32_t parameter_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodParameter(::com::sun::tools::javac::util::List* location, int32_t parameter_index);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodReceiver(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodReceiver(::com::sun::tools::javac::util::List* location);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodReceiver(int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodRef(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodRef(::com::sun::tools::javac::util::List* location);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodRefTypeArg(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodRefTypeArg(::com::sun::tools::javac::util::List* location, int32_t type_index);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodReturn(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodReturn(::com::sun::tools::javac::util::List* location);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodReturn(int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodThrows(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodThrows(::com::sun::tools::javac::util::List* location, int32_t type_index);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodTypeParameter(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodTypeParameter(::com::sun::tools::javac::util::List* location, int32_t parameter_index);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodTypeParameterBound(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t bound_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* methodTypeParameterBound(::com::sun::tools::javac::util::List* location, int32_t parameter_index, int32_t bound_index);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* newObj(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* newObj(int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* newObj(::com::sun::tools::javac::util::List* location);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* resourceVariable(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* resourceVariable(::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* resourceVariable(::com::sun::tools::javac::util::List* location);
	virtual void setCatchInfo(int32_t catchType, int32_t startPos);
	virtual void setExceptionIndex(int32_t exception_index);
	virtual $String* toString() override;
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* typeCast(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* typeCast(::com::sun::tools::javac::util::List* location, int32_t type_index);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* typeParameter(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* typeParameter(::com::sun::tools::javac::util::List* location, int32_t parameter_index);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* typeParameterBound(::com::sun::tools::javac::util::List* location, ::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t bound_index, int32_t pos);
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* typeParameterBound(::com::sun::tools::javac::util::List* location, int32_t parameter_index, int32_t bound_index);
	virtual void updatePosOffset(int32_t to);
	static ::com::sun::tools::javac::util::List* emptyPath;
	::com::sun::tools::javac::code::TargetType* type = nullptr;
	::com::sun::tools::javac::util::List* location = nullptr;
	int32_t pos = 0;
	bool isValidOffset = false;
	int32_t offset = 0;
	$ints* lvarOffset = nullptr;
	$ints* lvarLength = nullptr;
	$ints* lvarIndex = nullptr;
	int32_t bound_index = 0;
	int32_t parameter_index = 0;
	int32_t type_index = 0;
	int32_t exception_index = 0;
	int32_t exceptionStartPos = 0;
	::com::sun::tools::javac::tree::JCTree$JCLambda* onLambda = nullptr;
	static ::com::sun::tools::javac::code::TypeAnnotationPosition* unknown;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_TypeAnnotationPosition_h_