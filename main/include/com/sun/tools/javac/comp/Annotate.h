#ifndef _com_sun_tools_javac_comp_Annotate_h_
#define _com_sun_tools_javac_comp_Annotate_h_
//$ class com.sun.tools.javac.comp.Annotate
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class Attribute$Compound;
					class Attribute$TypeCompound;
					class DeferredLintHandler;
					class Lint;
					class Symbol;
					class Symbol$MethodSymbol;
					class Symbol$TypeSymbol;
					class Symtab;
					class Type;
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
				namespace comp {
					class Annotate$AnnotationContext;
					class Annotate$AnnotationTypeCompleter;
					class Annotate$Queues;
					class Attr;
					class Attr$ResultInfo;
					class Check;
					class ConstFold;
					class Enter;
					class Env;
					class Resolve;
					class TypeEnvs;
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
					class JCTree$JCAnnotation;
					class JCTree$JCExpression;
					class TreeMaker;
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
					class JCDiagnostic$DiagnosticPosition;
					class List;
					class ListBuffer;
					class Log;
					class Names;
					class Pair;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Runnable;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class $import Annotate : public ::java::lang::Object {
	$class(Annotate, 0, ::java::lang::Object)
public:
	Annotate();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual void afterTypes(::java::lang::Runnable* a);
	virtual void annotateDefaultValueLater(::com::sun::tools::javac::tree::JCTree$JCExpression* defaultValue, ::com::sun::tools::javac::comp::Env* localEnv, ::com::sun::tools::javac::code::Symbol$MethodSymbol* m, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* deferPos);
	virtual void annotateLater(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::comp::Env* localEnv, ::com::sun::tools::javac::code::Symbol* s, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* deferPos);
	void annotateNow(::com::sun::tools::javac::code::Symbol* toAnnotate, ::com::sun::tools::javac::util::List* withAnnotations, ::com::sun::tools::javac::comp::Env* env, bool typeAnnotations, bool isTypeParam);
	virtual void annotateTypeParameterSecondStage(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::util::List* annotations);
	virtual void annotateTypeSecondStage(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::code::Type* storeAt);
	virtual ::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter* annotationTypeSourceCompleter();
	::com::sun::tools::javac::comp::Attr$ResultInfo* annotationValueInfo(::com::sun::tools::javac::code::Type* pt);
	virtual bool annotationsBlocked();
	virtual ::com::sun::tools::javac::code::Attribute$Compound* attributeAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* tree, ::com::sun::tools::javac::code::Type* expectedAnnotationType, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::util::Pair* attributeAnnotationNameValuePair(::com::sun::tools::javac::tree::JCTree$JCExpression* nameValuePair, ::com::sun::tools::javac::code::Type* thisAnnotationType, bool badAnnotation, ::com::sun::tools::javac::comp::Env* env, bool elidedValue);
	void attributeAnnotationType(::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::code::Attribute* attributeAnnotationValue(::com::sun::tools::javac::code::Type* expectedElementType, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::util::List* attributeAnnotationValues(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a, ::com::sun::tools::javac::code::Type* expected, ::com::sun::tools::javac::comp::Env* env);
	virtual ::com::sun::tools::javac::code::Attribute$TypeCompound* attributeTypeAnnotation(::com::sun::tools::javac::tree::JCTree$JCAnnotation* a, ::com::sun::tools::javac::code::Type* expectedAnnotationType, ::com::sun::tools::javac::comp::Env* env);
	virtual void blockAnnotations();
	void doneFlushing();
	void enterDefaultValue(::com::sun::tools::javac::tree::JCTree$JCExpression* defaultValue, ::com::sun::tools::javac::comp::Env* localEnv, ::com::sun::tools::javac::code::Symbol$MethodSymbol* m);
	virtual void enterDone();
	virtual void enterTypeAnnotations(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* s, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* deferPos, bool isTypeParam);
	::com::sun::tools::javac::code::Type* extractContainingType(::com::sun::tools::javac::code::Attribute$Compound* ca, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, ::com::sun::tools::javac::code::Symbol$TypeSymbol* annoDecl);
	::com::sun::tools::javac::code::Type* filterSame(::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Type* s);
	virtual void flush();
	virtual ::com::sun::tools::javac::util::List* fromAnnotations(::com::sun::tools::javac::util::List* annotations);
	::com::sun::tools::javac::code::Attribute* getAnnotationArrayValue(::com::sun::tools::javac::code::Type* expectedElementType, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::code::Attribute* getAnnotationClassValue(::com::sun::tools::javac::code::Type* expectedElementType, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::code::Attribute* getAnnotationEnumValue(::com::sun::tools::javac::code::Type* expectedElementType, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::code::Attribute* getAnnotationPrimitiveValue(::com::sun::tools::javac::code::Type* expectedElementType, ::com::sun::tools::javac::tree::JCTree$JCExpression* tree, ::com::sun::tools::javac::comp::Env* env);
	::com::sun::tools::javac::code::Type* getContainingType(::com::sun::tools::javac::code::Attribute$Compound* currentAnno, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos, bool reportError);
	static ::com::sun::tools::javac::comp::Annotate* instance(::com::sun::tools::javac::util::Context* context);
	bool isAttributeTrue(::com::sun::tools::javac::code::Attribute* attr);
	bool isFlushing();
	void lambda$annotateDefaultValueLater$2(::com::sun::tools::javac::comp::Env* localEnv, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* deferPos, ::com::sun::tools::javac::tree::JCTree$JCExpression* defaultValue, ::com::sun::tools::javac::code::Symbol$MethodSymbol* m);
	void lambda$annotateDefaultValueLater$3(::com::sun::tools::javac::comp::Env* localEnv, ::com::sun::tools::javac::tree::JCTree$JCExpression* defaultValue);
	void lambda$annotateLater$0(::com::sun::tools::javac::code::Symbol* s, ::com::sun::tools::javac::comp::Env* localEnv, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* deferPos, ::com::sun::tools::javac::util::List* annotations);
	void lambda$annotateLater$1(::com::sun::tools::javac::comp::Env* localEnv, ::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::code::Symbol* s);
	void lambda$annotateTypeParameterSecondStage$6(::com::sun::tools::javac::util::List* annotations);
	void lambda$annotateTypeSecondStage$5(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::code::Type* storeAt);
	void lambda$queueScanTreeAndTypeAnnotate$4(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* deferPos);
	::com::sun::tools::javac::code::Attribute$Compound* makeContainerAnnotation(::com::sun::tools::javac::util::List* toBeReplaced, ::com::sun::tools::javac::comp::Annotate$AnnotationContext* ctx, ::com::sun::tools::javac::code::Symbol* sym, bool isTypeParam);
	virtual void newRound();
	virtual void normal(::java::lang::Runnable* r);
	::com::sun::tools::javac::code::Attribute$Compound* processRepeatedAnnotations(::com::sun::tools::javac::util::List* annotations, ::com::sun::tools::javac::comp::Annotate$AnnotationContext* ctx, ::com::sun::tools::javac::code::Symbol* on, bool isTypeParam);
	virtual void queueScanTreeAndTypeAnnotate(::com::sun::tools::javac::tree::JCTree* tree, ::com::sun::tools::javac::comp::Env* env, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* deferPos);
	virtual ::com::sun::tools::javac::comp::Annotate$Queues* setQueues(::com::sun::tools::javac::comp::Annotate$Queues* nue);
	void startFlushing();
	virtual void typeAnnotation(::java::lang::Runnable* a);
	virtual void unblockAnnotations();
	virtual void unblockAnnotationsNoFlush();
	virtual ::com::sun::tools::javac::code::Attribute* unfinishedDefaultValue();
	virtual void validate(::java::lang::Runnable* a);
	::com::sun::tools::javac::code::Symbol$MethodSymbol* validateContainer(::com::sun::tools::javac::code::Type* targetContainerType, ::com::sun::tools::javac::code::Type* originalAnnoType, ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticPosition* pos);
	static ::com::sun::tools::javac::util::Context$Key* annotateKey;
	::com::sun::tools::javac::comp::Attr* attr = nullptr;
	::com::sun::tools::javac::comp::Check* chk = nullptr;
	::com::sun::tools::javac::comp::ConstFold* cfolder = nullptr;
	::com::sun::tools::javac::code::DeferredLintHandler* deferredLintHandler = nullptr;
	::com::sun::tools::javac::comp::Enter* enter = nullptr;
	::com::sun::tools::javac::code::Lint* lint = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::com::sun::tools::javac::comp::Resolve* resolve = nullptr;
	::com::sun::tools::javac::tree::TreeMaker* make = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::comp::TypeEnvs* typeEnvs = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::code::Attribute* theUnfinishedDefaultValue = nullptr;
	bool allowRepeatedAnnos = false;
	$String* sourceName = nullptr;
	int32_t blockCount = 0;
	::com::sun::tools::javac::util::ListBuffer* q = nullptr;
	::com::sun::tools::javac::util::ListBuffer* validateQ = nullptr;
	int32_t flushCount = 0;
	::com::sun::tools::javac::util::ListBuffer* typesQ = nullptr;
	::com::sun::tools::javac::util::ListBuffer* afterTypesQ = nullptr;
	::com::sun::tools::javac::comp::Annotate$AnnotationTypeCompleter* theSourceCompleter = nullptr;
};

				} // comp
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_comp_Annotate_h_