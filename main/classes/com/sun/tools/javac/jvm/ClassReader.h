#ifndef _com_sun_tools_javac_jvm_ClassReader_h_
#define _com_sun_tools_javac_jvm_ClassReader_h_
//$ class com.sun.tools.javac.jvm.ClassReader
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLASS_ATTRIBUTE")
#undef CLASS_ATTRIBUTE
#pragma push_macro("CLASS_OR_MEMBER_ATTRIBUTE")
#undef CLASS_OR_MEMBER_ATTRIBUTE
#pragma push_macro("INITIAL_BUFFER_SIZE")
#undef INITIAL_BUFFER_SIZE
#pragma push_macro("MEMBER_ATTRIBUTE")
#undef MEMBER_ATTRIBUTE

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {
					class Attribute;
					class ClassFinder$BadClassFile;
					class ClassFinder$BadEnclosingMethodAttr;
					class DeferredCompletionFailureHandler;
					class Preview;
					class Scope;
					class Scope$WriteableScope;
					class Symbol;
					class Symbol$ClassSymbol;
					class Symbol$MethodSymbol;
					class Symbol$ModuleSymbol;
					class Symbol$TypeSymbol;
					class Symbol$VarSymbol;
					class Symtab;
					class Type;
					class Type$MethodType;
					class TypeAnnotationPosition;
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
					class Annotate;
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {
					class ClassReader$AttributeKind;
					class ClassReader$CompoundAnnotationProxy;
					class ClassReader$ParameterAnnotations;
					class ClassReader$TypeAnnotationProxy;
					class Code;
					class PoolConstant$NameAndType;
					class PoolReader;
					class Profile;
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
					class ByteBuffer;
					class Context;
					class Context$Key;
					class JCDiagnostic$Factory;
					class List;
					class Log;
					class Name;
					class Names;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntFunction;
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileManager;
		class JavaFileObject;
	}
}

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class $export ClassReader : public ::java::lang::Object {
	$class(ClassReader, 0, ::java::lang::Object)
public:
	ClassReader();
	void init$(::com::sun::tools::javac::util::Context* context);
	virtual int64_t adjustClassFlags(int64_t flags);
	virtual int64_t adjustFieldFlags(int64_t flags);
	virtual int64_t adjustMethodFlags(int64_t flags);
	::com::sun::tools::javac::util::List* adjustMethodParams(int64_t flags, ::com::sun::tools::javac::util::List* args);
	virtual void attachAnnotationDefault(::com::sun::tools::javac::code::Symbol* sym);
	virtual void attachAnnotations(::com::sun::tools::javac::code::Symbol* sym);
	virtual void attachAnnotations(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::List* annotations);
	virtual void attachTypeAnnotations(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::ClassFinder$BadClassFile* badClassFile($String* key, $ObjectArray* args);
	virtual ::com::sun::tools::javac::code::ClassFinder$BadEnclosingMethodAttr* badEnclosingMethod(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::Type* classSigToType();
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* enterClass(::com::sun::tools::javac::util::Name* name);
	virtual ::com::sun::tools::javac::code::Symbol$ClassSymbol* enterClass(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Symbol$TypeSymbol* owner);
	void enterMember(::com::sun::tools::javac::code::Symbol$ClassSymbol* c, ::com::sun::tools::javac::code::Symbol* sym);
	virtual void enterTypevars(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::code::Type* t);
	::com::sun::tools::javac::code::Symbol$MethodSymbol* findMethod(::com::sun::tools::javac::jvm::PoolConstant$NameAndType* nt, ::com::sun::tools::javac::code::Scope* scope, int64_t flags);
	virtual ::com::sun::tools::javac::code::Type* findTypeVar(::com::sun::tools::javac::util::Name* name);
	void initAttributeReaders();
	virtual void initParameterNames(::com::sun::tools::javac::code::Symbol$MethodSymbol* sym);
	static ::com::sun::tools::javac::jvm::ClassReader* instance(::com::sun::tools::javac::util::Context* context);
	static bool isAsciiDigit(char16_t c);
	bool isSameBinaryType(::com::sun::tools::javac::code::Type$MethodType* mt1, ::com::sun::tools::javac::code::Type$MethodType* mt2);
	static bool lambda$lookupMethod$1(::com::sun::tools::javac::code::Symbol* s);
	::com::sun::tools::javac::code::Type* lambda$readClass$0(int32_t idx);
	::com::sun::tools::javac::code::Symbol$MethodSymbol* lookupMethod(::com::sun::tools::javac::code::Symbol$TypeSymbol* tsym, ::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::util::List* argtypes);
	virtual int32_t nextByte();
	virtual char16_t nextChar();
	virtual int32_t nextInt();
	virtual $Object* optPoolEntry(int32_t index, ::java::util::function::IntFunction* poolFunc, Object$* defaultValue);
	::com::sun::tools::javac::code::Symbol$VarSymbol* parameter(int32_t index, ::com::sun::tools::javac::code::Type* t, ::com::sun::tools::javac::code::Symbol$MethodSymbol* owner, ::java::util::Set* exclude);
	virtual ::com::sun::tools::javac::util::List* readAnnotations();
	virtual ::com::sun::tools::javac::code::Attribute* readAttributeValue();
	virtual void readAttrs(::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::jvm::ClassReader$AttributeKind* kind);
	virtual void readClass(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void readClassAttrs(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	void readClassBuffer(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void readClassFile(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual ::com::sun::tools::javac::jvm::Code* readCode(::com::sun::tools::javac::code::Symbol* owner);
	virtual ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* readCompoundAnnotation();
	virtual void readEnclosingMethodAttr(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::java::util::Set* readExportsFlags(int32_t flags);
	virtual ::com::sun::tools::javac::code::Symbol$VarSymbol* readField();
	virtual void readInnerClasses(::com::sun::tools::javac::code::Symbol$ClassSymbol* c);
	virtual void readMemberAttrs(::com::sun::tools::javac::code::Symbol* sym);
	virtual ::com::sun::tools::javac::code::Symbol$MethodSymbol* readMethod();
	virtual ::java::util::Set* readModuleFlags(int32_t flags);
	virtual ::java::util::Set* readModuleResolutionFlags(int32_t flags);
	virtual ::java::util::Set* readOpensFlags(int32_t flags);
	virtual void readParameterAnnotations(::com::sun::tools::javac::code::Symbol* meth);
	virtual ::com::sun::tools::javac::code::TypeAnnotationPosition* readPosition();
	virtual ::java::util::Set* readRequiresFlags(int32_t flags);
	virtual ::com::sun::tools::javac::jvm::ClassReader$TypeAnnotationProxy* readTypeAnnotation();
	virtual ::com::sun::tools::javac::code::Type* readTypeOrClassSymbol(int32_t i);
	virtual ::com::sun::tools::javac::util::List* readTypePath();
	virtual ::com::sun::tools::javac::code::Type* readTypeToProxy(int32_t i);
	void setFlagIfAttributeTrue(::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* proxy, ::com::sun::tools::javac::code::Symbol* sym, ::com::sun::tools::javac::util::Name* attribute, int64_t flag);
	virtual void setParameters(::com::sun::tools::javac::code::Symbol$MethodSymbol* sym, ::com::sun::tools::javac::code::Type* jvmType);
	virtual ::com::sun::tools::javac::code::Type* sigToType($bytes* sig, int32_t offset, int32_t len);
	virtual ::com::sun::tools::javac::code::Type* sigToType();
	virtual ::com::sun::tools::javac::code::Type* sigToTypeParam();
	virtual ::com::sun::tools::javac::util::List* sigToTypeParams($bytes* sig, int32_t offset, int32_t len);
	virtual ::com::sun::tools::javac::util::List* sigToTypeParams();
	virtual ::com::sun::tools::javac::util::List* sigToTypes(char16_t terminator);
	::com::sun::tools::javac::util::Name* simpleBinaryName(::com::sun::tools::javac::util::Name* self, ::com::sun::tools::javac::util::Name* enclosing);
	virtual void skipBytes(int32_t n);
	virtual void skipInnerClasses();
	virtual void skipMember();
	virtual void validateMethodType(::com::sun::tools::javac::util::Name* name, ::com::sun::tools::javac::code::Type* t);
	static ::com::sun::tools::javac::util::Context$Key* classReaderKey;
	static const int32_t INITIAL_BUFFER_SIZE = 0x0000FFF0;
	::com::sun::tools::javac::comp::Annotate* annotate = nullptr;
	bool verbose = false;
	bool allowModules = false;
	bool allowSealedTypes = false;
	bool allowRecords = false;
	bool lintClassfile = false;
	bool saveParameterNames = false;
	::com::sun::tools::javac::jvm::Profile* profile = nullptr;
	::com::sun::tools::javac::util::Log* log = nullptr;
	::com::sun::tools::javac::code::Symtab* syms = nullptr;
	::com::sun::tools::javac::code::Types* types = nullptr;
	::com::sun::tools::javac::util::Names* names = nullptr;
	::javax::tools::JavaFileManager* fileManager = nullptr;
	::com::sun::tools::javac::util::JCDiagnostic$Factory* diagFactory = nullptr;
	::com::sun::tools::javac::code::DeferredCompletionFailureHandler* dcfh = nullptr;
	::com::sun::tools::javac::code::Preview* preview = nullptr;
	::com::sun::tools::javac::code::Scope$WriteableScope* typevars = nullptr;
	::com::sun::tools::javac::util::List* interimUses = nullptr;
	::com::sun::tools::javac::util::List* interimProvides = nullptr;
	::javax::tools::JavaFileObject* currentClassFile = nullptr;
	::com::sun::tools::javac::code::Symbol* currentOwner = nullptr;
	::com::sun::tools::javac::code::Symbol$ModuleSymbol* currentModule = nullptr;
	::com::sun::tools::javac::util::ByteBuffer* buf = nullptr;
	int32_t bp = 0;
	::com::sun::tools::javac::jvm::PoolReader* poolReader = nullptr;
	int32_t majorVersion = 0;
	int32_t minorVersion = 0;
	$ints* parameterNameIndices = nullptr;
	$ints* parameterAccessFlags = nullptr;
	$Array<::com::sun::tools::javac::jvm::ClassReader$ParameterAnnotations>* parameterAnnotations = nullptr;
	bool haveParameterNameIndices = false;
	bool sawMethodParameters = false;
	::java::util::Set* warnedAttrs = nullptr;
	::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* target = nullptr;
	::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy* repeatable = nullptr;
	$bytes* signature = nullptr;
	int32_t sigp = 0;
	int32_t siglimit = 0;
	bool sigEnterPhase = false;
	$bytes* signatureBuffer = nullptr;
	int32_t sbp = 0;
	::java::util::Set* CLASS_ATTRIBUTE = nullptr;
	::java::util::Set* MEMBER_ATTRIBUTE = nullptr;
	::java::util::Set* CLASS_OR_MEMBER_ATTRIBUTE = nullptr;
	::java::util::Map* attributeReaders = nullptr;
	bool readingClassAttr = false;
	::com::sun::tools::javac::util::List* missingTypeVariables = nullptr;
	::com::sun::tools::javac::util::List* foundTypeVariables = nullptr;
	bool filling = false;
};

				} // jvm
			} // javac
		} // tools
	} // sun
} // com

#pragma pop_macro("CLASS_ATTRIBUTE")
#pragma pop_macro("CLASS_OR_MEMBER_ATTRIBUTE")
#pragma pop_macro("INITIAL_BUFFER_SIZE")
#pragma pop_macro("MEMBER_ATTRIBUTE")

#endif // _com_sun_tools_javac_jvm_ClassReader_h_