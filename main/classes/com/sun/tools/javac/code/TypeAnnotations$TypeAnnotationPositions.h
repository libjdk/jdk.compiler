#ifndef _com_sun_tools_javac_code_TypeAnnotations$TypeAnnotationPositions_h_
#define _com_sun_tools_javac_code_TypeAnnotations$TypeAnnotationPositions_h_
//$ class com.sun.tools.javac.code.TypeAnnotations$TypeAnnotationPositions
//$ extends com.sun.tools.javac.tree.TreeScanner

#include <com/sun/tools/javac/tree/TreeScanner.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute$Compound;
					class Attribute$TypeCompound;
					class Symbol;
					class Symbol$RecordComponent;
					class Type;
					class Type$ArrayType;
					class TypeAnnotationPosition;
					class TypeAnnotations;
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
					class JCTree;
					class JCTree$JCAnnotatedType;
					class JCTree$JCBlock;
					class JCTree$JCClassDecl;
					class JCTree$JCLambda;
					class JCTree$JCMethodDecl;
					class JCTree$JCNewArray;
					class JCTree$JCNewClass;
					class JCTree$JCTypeParameter;
					class JCTree$JCVariableDecl;
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

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class TypeAnnotations$TypeAnnotationPositions : public ::com::sun::tools::javac::tree::TreeScanner {
	$class(TypeAnnotations$TypeAnnotationPositions, $NO_CLASS_INIT, ::com::sun::tools::javac::tree::TreeScanner)
public:
	TypeAnnotations$TypeAnnotationPositions();
	void init$(::com::sun::tools::javac::code::TypeAnnotations* this$0, bool sigOnly);
	void appendTypeAnnotationsToOwner(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::List* typeAnnotations);
	void findPosition(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree* frame, ::com::sun::tools::javac::util::List* annotations);
	void lambda$visitClassDef$0(::com::sun::tools::javac::code::Symbol$RecordComponent* rc);
	::com::sun::tools::javac::util::ListBuffer* locateNestedTypes(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::ListBuffer* depth);
	int32_t methodParamIndex(::com::sun::tools::javac::util::List* path, ::com::sun::tools::javac::tree::JCTree* param);
	::com::sun::tools::javac::tree::JCTree* peek2();
	virtual ::com::sun::tools::javac::tree::JCTree* pop();
	void propagateNewClassAnnotationsToOwner(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree);
	virtual void push(::com::sun::tools::javac::tree::JCTree* t);
	::com::sun::tools::javac::code::TypeAnnotationPosition* resolveFrame(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::tree::JCTree* frame, ::com::sun::tools::javac::util::List* path, ::com::sun::tools::javac::tree::JCTree$JCLambda* currentLambda, int32_t outer_type_index, ::com::sun::tools::javac::util::ListBuffer* location);
	::com::sun::tools::javac::code::Type* rewriteArrayType(::com::sun::tools::javac::code::Type$ArrayType* type, ::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::code::TypeAnnotationPosition* pos);
	using ::com::sun::tools::javac::tree::TreeScanner::scan;
	virtual void scan(::com::sun::tools::javac::tree::JCTree* tree) override;
	void separateAnnotationsKinds(::com::sun::tools::javac::tree::JCTree* typetree, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::TypeAnnotationPosition* pos);
	void setTypeAnnotationPos(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::code::TypeAnnotationPosition* position);
	virtual $String* toString() override;
	::com::sun::tools::javac::code::Attribute$TypeCompound* toTypeCompound(::com::sun::tools::javac::code::Attribute$Compound* a, ::com::sun::tools::javac::code::TypeAnnotationPosition* p);
	::com::sun::tools::javac::code::Type* typeWithAnnotations(::com::sun::tools::javac::tree::JCTree* typetree, ::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::util::List* onlyTypeAnnotations, ::com::sun::tools::javac::code::TypeAnnotationPosition* pos);
	::com::sun::tools::javac::code::Type* typeWithAnnotations(::com::sun::tools::javac::code::Type* type, ::com::sun::tools::javac::code::Type* stopAt, ::com::sun::tools::javac::util::List* annotations);
	virtual void visitAnnotatedType(::com::sun::tools::javac::tree::JCTree$JCAnnotatedType* tree) override;
	virtual void visitBlock(::com::sun::tools::javac::tree::JCTree$JCBlock* tree) override;
	virtual void visitClassDef(::com::sun::tools::javac::tree::JCTree$JCClassDecl* tree) override;
	virtual void visitLambda(::com::sun::tools::javac::tree::JCTree$JCLambda* tree) override;
	virtual void visitMethodDef(::com::sun::tools::javac::tree::JCTree$JCMethodDecl* tree) override;
	virtual void visitNewArray(::com::sun::tools::javac::tree::JCTree$JCNewArray* tree) override;
	virtual void visitNewClass(::com::sun::tools::javac::tree::JCTree$JCNewClass* tree) override;
	virtual void visitTypeParameter(::com::sun::tools::javac::tree::JCTree$JCTypeParameter* tree) override;
	virtual void visitVarDef(::com::sun::tools::javac::tree::JCTree$JCVariableDecl* tree) override;
	::com::sun::tools::javac::code::TypeAnnotations* this$0 = nullptr;
	bool sigOnly = false;
	::com::sun::tools::javac::util::List* frames = nullptr;
	bool isInClass = false;
	::com::sun::tools::javac::tree::JCTree$JCLambda* currentLambda = nullptr;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_TypeAnnotations$TypeAnnotationPositions_h_