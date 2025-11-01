#ifndef _com_sun_tools_javac_code_Type_h_
#define _com_sun_tools_javac_code_Type_h_
//$ class com.sun.tools.javac.code.Type
//$ extends com.sun.tools.javac.code.AnnoConstruct
//$ implements javax.lang.model.type.TypeMirror,com.sun.tools.javac.jvm.PoolConstant

#include <com/sun/tools/javac/code/AnnoConstruct.h>
#include <com/sun/tools/javac/jvm/PoolConstant.h>
#include <java/lang/Array.h>
#include <javax/lang/model/type/TypeMirror.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Symbol$TypeSymbol;
					class Type$JCNoType;
					class Type$MethodType;
					class Type$Visitor;
					class TypeMetadata;
					class TypeMetadata$Entry;
					class TypeMetadata$Entry$Kind;
					class TypeTag;
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
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace annotation {
			class Annotation;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Predicate;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeKind;
				class TypeVisitor;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

class $export Type : public ::com::sun::tools::javac::code::AnnoConstruct, public ::javax::lang::model::type::TypeMirror, public ::com::sun::tools::javac::jvm::PoolConstant {
	$class(Type, 0, ::com::sun::tools::javac::code::AnnoConstruct, ::javax::lang::model::type::TypeMirror, ::com::sun::tools::javac::jvm::PoolConstant)
public:
	Type();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::code::TypeMetadata* metadata);
	virtual $Object* accept(::com::sun::tools::javac::code::Type$Visitor* v, Object$* s);
	virtual $Object* accept(::javax::lang::model::type::TypeVisitor* v, Object$* p) override;
	virtual ::com::sun::tools::javac::util::List* allparams();
	virtual ::com::sun::tools::javac::code::Type* annotatedType(::com::sun::tools::javac::util::List* annos);
	virtual void appendAnnotationsString(::java::lang::StringBuilder* sb, bool prefix);
	virtual void appendAnnotationsString(::java::lang::StringBuilder* sb);
	virtual $String* argtypes(bool varargs);
	virtual ::com::sun::tools::javac::code::Symbol$TypeSymbol* asElement();
	virtual ::com::sun::tools::javac::code::Type$MethodType* asMethodType();
	virtual ::com::sun::tools::javac::code::Type* baseType();
	static ::com::sun::tools::javac::util::List* baseTypes(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::code::Type* cloneWithMetadata(::com::sun::tools::javac::code::TypeMetadata* metadata) {return nullptr;}
	virtual void complete();
	virtual ::com::sun::tools::javac::code::Type* constType(Object$* constValue);
	virtual $Object* constValue();
	virtual bool contains(::com::sun::tools::javac::code::Type* t);
	static bool contains(::com::sun::tools::javac::util::List* ts, ::com::sun::tools::javac::code::Type* t);
	virtual bool containsAny(::com::sun::tools::javac::util::List* ts);
	static bool containsAny(::com::sun::tools::javac::util::List* ts1, ::com::sun::tools::javac::util::List* ts2);
	virtual bool equals(Object$* t) override;
	virtual bool equalsIgnoreMetadata(::com::sun::tools::javac::code::Type* t);
	static ::com::sun::tools::javac::util::List* filter(::com::sun::tools::javac::util::List* ts, ::java::util::function::Predicate* tf);
	virtual ::java::lang::annotation::Annotation* getAnnotation($Class* annotationType) override;
	virtual ::java::util::List* getAnnotationMirrors() override;
	virtual $Array<::java::lang::annotation::Annotation>* getAnnotationsByType($Class* annotationType) override;
	virtual ::com::sun::tools::javac::code::Type* getEnclosingType();
	virtual ::javax::lang::model::type::TypeKind* getKind() override;
	virtual ::com::sun::tools::javac::code::Type* getLowerBound();
	virtual ::com::sun::tools::javac::code::TypeMetadata* getMetadata();
	virtual ::com::sun::tools::javac::code::TypeMetadata$Entry* getMetadataOfKind(::com::sun::tools::javac::code::TypeMetadata$Entry$Kind* kind);
	virtual ::com::sun::tools::javac::code::Type* getModelType();
	static ::com::sun::tools::javac::util::List* getModelTypes(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::code::Type* getOriginalType();
	virtual ::com::sun::tools::javac::util::List* getParameterTypes();
	virtual ::com::sun::tools::javac::code::Type* getReceiverType();
	virtual ::com::sun::tools::javac::code::Type* getReturnType();
	virtual ::com::sun::tools::javac::code::TypeTag* getTag() {return nullptr;}
	virtual ::com::sun::tools::javac::util::List* getThrownTypes();
	virtual ::com::sun::tools::javac::util::List* getTypeArguments();
	virtual ::com::sun::tools::javac::code::Type* getUpperBound();
	virtual bool hasTag(::com::sun::tools::javac::code::TypeTag* tag);
	virtual int32_t hashCode() override;
	virtual bool isAnnotated();
	virtual bool isCompound();
	virtual bool isErroneous();
	static bool isErroneous(::com::sun::tools::javac::util::List* ts);
	virtual bool isExtendsBound();
	virtual bool isFalse();
	virtual bool isFinal();
	virtual bool isIntegral();
	virtual bool isInterface();
	virtual bool isIntersection();
	virtual bool isNullOrReference();
	virtual bool isNumeric();
	virtual bool isParameterized();
	virtual bool isPartial();
	virtual bool isPrimitive();
	virtual bool isPrimitiveOrVoid();
	virtual bool isRaw();
	virtual bool isReference();
	virtual bool isSuperBound();
	virtual bool isTrue();
	virtual bool isUnbound();
	virtual bool isUnion();
	virtual ::com::sun::tools::javac::code::Type* map(::com::sun::tools::javac::code::Types$TypeMapping* mapping, Object$* arg);
	virtual ::com::sun::tools::javac::code::Type* map(::com::sun::tools::javac::code::Types$TypeMapping* mapping);
	virtual bool needsStripping();
	virtual $Object* poolKey(::com::sun::tools::javac::code::Types* types) override;
	virtual int32_t poolTag() override;
	virtual $String* stringValue();
	virtual ::com::sun::tools::javac::code::Type* stripMetadata();
	virtual ::com::sun::tools::javac::code::Type* stripMetadataIfNeeded();
	virtual $String* toString() override;
	static $String* toString(::com::sun::tools::javac::util::List* ts);
	virtual ::com::sun::tools::javac::code::Type* typeNoMetadata();
	virtual ::com::sun::tools::javac::code::Type* withTypeVar(::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::TypeMetadata* metadata = nullptr;
	static ::com::sun::tools::javac::code::Type$JCNoType* noType;
	static ::com::sun::tools::javac::code::Type$JCNoType* recoveryType;
	static ::com::sun::tools::javac::code::Type$JCNoType* stuckType;
	static bool moreInfo;
	::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym = nullptr;
	static ::com::sun::tools::javac::code::Types$TypeMapping* stripMetadata$;
};

				} // code
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_code_Type_h_