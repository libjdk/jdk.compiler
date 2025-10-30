#include <com/sun/tools/javac/util/Names.h>

#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/Name$Table.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/SharedNameTable.h>
#include <com/sun/tools/javac/util/UnsharedNameTable.h>
#include <jcpp.h>

#undef ANNOTATION_TYPE
#undef CLASS
#undef CONSTRUCTOR
#undef FIELD
#undef LOCAL_VARIABLE
#undef METHOD
#undef MODULE
#undef PACKAGE
#undef PARAMETER
#undef RECORD_COMPONENT
#undef RUNTIME
#undef SOURCE
#undef T
#undef TYPE
#undef TYPE_PARAMETER
#undef TYPE_USE

using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$Table = ::com::sun::tools::javac::util::Name$Table;
using $Options = ::com::sun::tools::javac::util::Options;
using $SharedNameTable = ::com::sun::tools::javac::util::SharedNameTable;
using $UnsharedNameTable = ::com::sun::tools::javac::util::UnsharedNameTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _Names_FieldInfo_[] = {
	{"namesKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/util/Names;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Names, namesKey)},
	{"asterisk", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, asterisk)},
	{"comma", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, comma)},
	{"empty", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, empty)},
	{"hyphen", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, hyphen)},
	{"one", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, one)},
	{"slash", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, slash)},
	{"_class", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, _class)},
	{"_super", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, _super)},
	{"_this", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, _this)},
	{"var", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, var)},
	{"exports", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, exports)},
	{"opens", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, opens)},
	{"module", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, module)},
	{"provides", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, provides)},
	{"requires", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, requires)},
	{"to", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, to)},
	{"transitive", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, transitive)},
	{"uses", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, uses)},
	{"open", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, open)},
	{"with", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, with)},
	{"yield", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, yield)},
	{"_name", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, _name)},
	{"addSuppressed", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, addSuppressed)},
	{"any", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, any)},
	{"append", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, append)},
	{"clinit", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, clinit)},
	{"clone", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, clone$)},
	{"close", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, close)},
	{"deserializeLambda", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, deserializeLambda)},
	{"desiredAssertionStatus", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, desiredAssertionStatus)},
	{"equals", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, equals$)},
	{"error", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, error)},
	{"finalize", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, finalize$)},
	{"forRemoval", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, forRemoval)},
	{"reflective", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, reflective)},
	{"getClass", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, getClass$)},
	{"hasNext", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, hasNext)},
	{"hashCode", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, hashCode$)},
	{"init", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, init)},
	{"iterator", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, iterator)},
	{"length", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, length)},
	{"next", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, next)},
	{"ordinal", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, ordinal)},
	{"provider", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, provider)},
	{"serialVersionUID", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, serialVersionUID)},
	{"toString", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, toString$)},
	{"value", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, value)},
	{"valueOf", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, valueOf)},
	{"values", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, values)},
	{"readResolve", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, readResolve)},
	{"readObject", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, readObject)},
	{"java_io_Serializable", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, java_io_Serializable)},
	{"java_lang_Class", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, java_lang_Class)},
	{"java_lang_Cloneable", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, java_lang_Cloneable)},
	{"java_lang_Enum", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, java_lang_Enum)},
	{"java_lang_Object", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, java_lang_Object)},
	{"Array", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Array)},
	{"Bound", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Bound)},
	{"Method", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Method)},
	{"java", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, java)},
	{"java_lang", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, java_lang)},
	{"java_base", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, java_base)},
	{"Annotation", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Annotation)},
	{"AnnotationDefault", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, AnnotationDefault)},
	{"BootstrapMethods", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, BootstrapMethods)},
	{"Bridge", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Bridge)},
	{"CharacterRangeTable", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, CharacterRangeTable)},
	{"Code", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Code)},
	{"CompilationID", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, CompilationID)},
	{"ConstantValue", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, ConstantValue)},
	{"Deprecated", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Deprecated)},
	{"EnclosingMethod", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, EnclosingMethod)},
	{"Enum", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Enum)},
	{"Exceptions", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Exceptions)},
	{"InnerClasses", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, InnerClasses)},
	{"LineNumberTable", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, LineNumberTable)},
	{"LocalVariableTable", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, LocalVariableTable)},
	{"LocalVariableTypeTable", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, LocalVariableTypeTable)},
	{"MethodParameters", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, MethodParameters)},
	{"Module", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Module)},
	{"ModuleResolution", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, ModuleResolution)},
	{"NestHost", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, NestHost)},
	{"NestMembers", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, NestMembers)},
	{"Record", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Record)},
	{"RuntimeInvisibleAnnotations", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, RuntimeInvisibleAnnotations)},
	{"RuntimeInvisibleParameterAnnotations", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, RuntimeInvisibleParameterAnnotations)},
	{"RuntimeInvisibleTypeAnnotations", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, RuntimeInvisibleTypeAnnotations)},
	{"RuntimeVisibleAnnotations", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, RuntimeVisibleAnnotations)},
	{"RuntimeVisibleParameterAnnotations", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, RuntimeVisibleParameterAnnotations)},
	{"RuntimeVisibleTypeAnnotations", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, RuntimeVisibleTypeAnnotations)},
	{"Signature", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Signature)},
	{"SourceFile", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, SourceFile)},
	{"SourceID", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, SourceID)},
	{"StackMap", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, StackMap)},
	{"StackMapTable", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, StackMapTable)},
	{"Synthetic", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Synthetic)},
	{"Value", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Value)},
	{"Varargs", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, Varargs)},
	{"PermittedSubclasses", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, PermittedSubclasses)},
	{"ANNOTATION_TYPE", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, ANNOTATION_TYPE)},
	{"CONSTRUCTOR", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, CONSTRUCTOR)},
	{"FIELD", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, FIELD)},
	{"LOCAL_VARIABLE", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, LOCAL_VARIABLE)},
	{"METHOD", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, METHOD)},
	{"MODULE", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, MODULE)},
	{"PACKAGE", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, PACKAGE)},
	{"PARAMETER", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, PARAMETER)},
	{"TYPE", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, TYPE)},
	{"TYPE_PARAMETER", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, TYPE_PARAMETER)},
	{"TYPE_USE", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, TYPE_USE)},
	{"RECORD_COMPONENT", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, RECORD_COMPONENT)},
	{"CLASS", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, CLASS)},
	{"RUNTIME", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, RUNTIME)},
	{"SOURCE", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, SOURCE)},
	{"T", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, T)},
	{"ex", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, ex)},
	{"module_info", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, module_info)},
	{"package_info", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, package_info)},
	{"requireNonNull", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, requireNonNull)},
	{"lambda", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, lambda)},
	{"metafactory", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, metafactory)},
	{"altMetafactory", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, altMetafactory)},
	{"dollarThis", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, dollarThis)},
	{"makeConcat", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, makeConcat)},
	{"makeConcatWithConstants", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, makeConcatWithConstants)},
	{"bootstrap", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, bootstrap)},
	{"record", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, record)},
	{"non", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, non)},
	{"serialPersistentFields", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, serialPersistentFields)},
	{"writeObject", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, writeObject)},
	{"writeReplace", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, writeReplace)},
	{"readObjectNoData", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, readObjectNoData)},
	{"permits", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, permits)},
	{"sealed", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, sealed)},
	{"typeSwitch", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, typeSwitch)},
	{"enumSwitch", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(Names, enumSwitch)},
	{"table", "Lcom/sun/tools/javac/util/Name$Table;", nullptr, $PUBLIC | $FINAL, $field(Names, table)},
	{}
};

$MethodInfo _Names_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PUBLIC, $method(static_cast<void(Names::*)($Context*)>(&Names::init$))},
	{"createTable", "(Lcom/sun/tools/javac/util/Options;)Lcom/sun/tools/javac/util/Name$Table;", nullptr, $PROTECTED},
	{"dispose", "()V", nullptr, $PUBLIC},
	{"fromChars", "([CII)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"fromString", "(Ljava/lang/String;)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"fromUtf", "([B)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"fromUtf", "([BII)Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/util/Names;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Names*(*)($Context*)>(&Names::instance))},
	{}
};

$ClassInfo _Names_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.util.Names",
	"java.lang.Object",
	nullptr,
	_Names_FieldInfo_,
	_Names_MethodInfo_
};

$Object* allocate$Names($Class* clazz) {
	return $of($alloc(Names));
}

$Context$Key* Names::namesKey = nullptr;

Names* Names::instance($Context* context) {
	$init(Names);
	$var(Names, instance, $cast(Names, $nc(context)->get(Names::namesKey)));
	if (instance == nullptr) {
		$assign(instance, $new(Names, context));
		context->put(Names::namesKey, $of(instance));
	}
	return instance;
}

void Names::init$($Context* context) {
	$var($Options, options, $Options::instance(context));
	$set(this, table, createTable(options));
	$set(this, asterisk, fromString("*"_s));
	$set(this, comma, fromString(","_s));
	$set(this, empty, fromString(""_s));
	$set(this, hyphen, fromString("-"_s));
	$set(this, one, fromString("1"_s));
	$set(this, slash, fromString("/"_s));
	$set(this, _class, fromString("class"_s));
	$set(this, _super, fromString("super"_s));
	$set(this, _this, fromString("this"_s));
	$set(this, var, fromString("var"_s));
	$set(this, exports, fromString("exports"_s));
	$set(this, opens, fromString("opens"_s));
	$set(this, module, fromString("module"_s));
	$set(this, provides, fromString("provides"_s));
	$set(this, requires, fromString("requires"_s));
	$set(this, to, fromString("to"_s));
	$set(this, transitive, fromString("transitive"_s));
	$set(this, uses, fromString("uses"_s));
	$set(this, open, fromString("open"_s));
	$set(this, with, fromString("with"_s));
	$set(this, yield, fromString("yield"_s));
	$set(this, _name, fromString("name"_s));
	$set(this, addSuppressed, fromString("addSuppressed"_s));
	$set(this, any, fromString("<any>"_s));
	$set(this, append, fromString("append"_s));
	$set(this, clinit, fromString("<clinit>"_s));
	$set(this, clone$, fromString("clone"_s));
	$set(this, close, fromString("close"_s));
	$set(this, deserializeLambda, fromString("$deserializeLambda$"_s));
	$set(this, desiredAssertionStatus, fromString("desiredAssertionStatus"_s));
	$set(this, equals$, fromString("equals"_s));
	$set(this, error, fromString("<error>"_s));
	$set(this, finalize$, fromString("finalize"_s));
	$set(this, forRemoval, fromString("forRemoval"_s));
	$set(this, reflective, fromString("reflective"_s));
	$set(this, getClass$, fromString("getClass"_s));
	$set(this, hasNext, fromString("hasNext"_s));
	$set(this, hashCode$, fromString("hashCode"_s));
	$set(this, init, fromString("<init>"_s));
	$set(this, iterator, fromString("iterator"_s));
	$set(this, length, fromString("length"_s));
	$set(this, next, fromString("next"_s));
	$set(this, ordinal, fromString("ordinal"_s));
	$set(this, provider, fromString("provider"_s));
	$set(this, serialVersionUID, fromString("serialVersionUID"_s));
	$set(this, toString$, fromString("toString"_s));
	$set(this, value, fromString("value"_s));
	$set(this, valueOf, fromString("valueOf"_s));
	$set(this, values, fromString("values"_s));
	$set(this, readResolve, fromString("readResolve"_s));
	$set(this, readObject, fromString("readObject"_s));
	$set(this, dollarThis, fromString("$this"_s));
	$set(this, java_io_Serializable, fromString("java.io.Serializable"_s));
	$set(this, java_lang_Class, fromString("java.lang.Class"_s));
	$set(this, java_lang_Cloneable, fromString("java.lang.Cloneable"_s));
	$set(this, java_lang_Enum, fromString("java.lang.Enum"_s));
	$set(this, java_lang_Object, fromString("java.lang.Object"_s));
	$set(this, Array, fromString("Array"_s));
	$set(this, Bound, fromString("Bound"_s));
	$set(this, Method, fromString("Method"_s));
	$set(this, java, fromString("java"_s));
	$set(this, java_lang, fromString("java.lang"_s));
	$set(this, java_base, fromString("java.base"_s));
	$set(this, Annotation, fromString("Annotation"_s));
	$set(this, AnnotationDefault, fromString("AnnotationDefault"_s));
	$set(this, BootstrapMethods, fromString("BootstrapMethods"_s));
	$set(this, Bridge, fromString("Bridge"_s));
	$set(this, CharacterRangeTable, fromString("CharacterRangeTable"_s));
	$set(this, Code, fromString("Code"_s));
	$set(this, CompilationID, fromString("CompilationID"_s));
	$set(this, ConstantValue, fromString("ConstantValue"_s));
	$set(this, Deprecated, fromString("Deprecated"_s));
	$set(this, EnclosingMethod, fromString("EnclosingMethod"_s));
	$set(this, Enum, fromString("Enum"_s));
	$set(this, Exceptions, fromString("Exceptions"_s));
	$set(this, InnerClasses, fromString("InnerClasses"_s));
	$set(this, LineNumberTable, fromString("LineNumberTable"_s));
	$set(this, LocalVariableTable, fromString("LocalVariableTable"_s));
	$set(this, LocalVariableTypeTable, fromString("LocalVariableTypeTable"_s));
	$set(this, MethodParameters, fromString("MethodParameters"_s));
	$set(this, Module, fromString("Module"_s));
	$set(this, ModuleResolution, fromString("ModuleResolution"_s));
	$set(this, NestHost, fromString("NestHost"_s));
	$set(this, NestMembers, fromString("NestMembers"_s));
	$set(this, Record, fromString("Record"_s));
	$set(this, RuntimeInvisibleAnnotations, fromString("RuntimeInvisibleAnnotations"_s));
	$set(this, RuntimeInvisibleParameterAnnotations, fromString("RuntimeInvisibleParameterAnnotations"_s));
	$set(this, RuntimeInvisibleTypeAnnotations, fromString("RuntimeInvisibleTypeAnnotations"_s));
	$set(this, RuntimeVisibleAnnotations, fromString("RuntimeVisibleAnnotations"_s));
	$set(this, RuntimeVisibleParameterAnnotations, fromString("RuntimeVisibleParameterAnnotations"_s));
	$set(this, RuntimeVisibleTypeAnnotations, fromString("RuntimeVisibleTypeAnnotations"_s));
	$set(this, Signature, fromString("Signature"_s));
	$set(this, SourceFile, fromString("SourceFile"_s));
	$set(this, SourceID, fromString("SourceID"_s));
	$set(this, StackMap, fromString("StackMap"_s));
	$set(this, StackMapTable, fromString("StackMapTable"_s));
	$set(this, Synthetic, fromString("Synthetic"_s));
	$set(this, Value, fromString("Value"_s));
	$set(this, Varargs, fromString("Varargs"_s));
	$set(this, PermittedSubclasses, fromString("PermittedSubclasses"_s));
	$set(this, ANNOTATION_TYPE, fromString("ANNOTATION_TYPE"_s));
	$set(this, CONSTRUCTOR, fromString("CONSTRUCTOR"_s));
	$set(this, FIELD, fromString("FIELD"_s));
	$set(this, LOCAL_VARIABLE, fromString("LOCAL_VARIABLE"_s));
	$set(this, METHOD, fromString("METHOD"_s));
	$set(this, MODULE, fromString("MODULE"_s));
	$set(this, PACKAGE, fromString("PACKAGE"_s));
	$set(this, PARAMETER, fromString("PARAMETER"_s));
	$set(this, TYPE, fromString("TYPE"_s));
	$set(this, TYPE_PARAMETER, fromString("TYPE_PARAMETER"_s));
	$set(this, TYPE_USE, fromString("TYPE_USE"_s));
	$set(this, RECORD_COMPONENT, fromString("RECORD_COMPONENT"_s));
	$set(this, CLASS, fromString("CLASS"_s));
	$set(this, RUNTIME, fromString("RUNTIME"_s));
	$set(this, SOURCE, fromString("SOURCE"_s));
	$set(this, T, fromString("T"_s));
	$set(this, ex, fromString("ex"_s));
	$set(this, module_info, fromString("module-info"_s));
	$set(this, package_info, fromString("package-info"_s));
	$set(this, requireNonNull, fromString("requireNonNull"_s));
	$set(this, lambda, fromString("lambda$"_s));
	$set(this, metafactory, fromString("metafactory"_s));
	$set(this, altMetafactory, fromString("altMetafactory"_s));
	$set(this, makeConcat, fromString("makeConcat"_s));
	$set(this, makeConcatWithConstants, fromString("makeConcatWithConstants"_s));
	$set(this, bootstrap, fromString("bootstrap"_s));
	$set(this, record, fromString("record"_s));
	$set(this, non, fromString("non"_s));
	$set(this, serialPersistentFields, fromString("serialPersistentFields"_s));
	$set(this, writeObject, fromString("writeObject"_s));
	$set(this, writeReplace, fromString("writeReplace"_s));
	$set(this, readObjectNoData, fromString("readObjectNoData"_s));
	$set(this, permits, fromString("permits"_s));
	$set(this, sealed, fromString("sealed"_s));
	$set(this, typeSwitch, fromString("typeSwitch"_s));
	$set(this, enumSwitch, fromString("enumSwitch"_s));
}

$Name$Table* Names::createTable($Options* options) {
	bool useUnsharedTable = $nc(options)->isSet("useUnsharedTable"_s);
	if (useUnsharedTable) {
		return $UnsharedNameTable::create(this);
	} else {
		return $SharedNameTable::create(this);
	}
}

void Names::dispose() {
	$nc(this->table)->dispose();
}

$Name* Names::fromChars($chars* cs, int32_t start, int32_t len) {
	return $nc(this->table)->fromChars(cs, start, len);
}

$Name* Names::fromString($String* s) {
	return $nc(this->table)->fromString(s);
}

$Name* Names::fromUtf($bytes* cs) {
	return $nc(this->table)->fromUtf(cs);
}

$Name* Names::fromUtf($bytes* cs, int32_t start, int32_t len) {
	return $nc(this->table)->fromUtf(cs, start, len);
}

void clinit$Names($Class* class$) {
	$assignStatic(Names::namesKey, $new($Context$Key));
}

Names::Names() {
}

$Class* Names::load$($String* name, bool initialize) {
	$loadClass(Names, name, initialize, &_Names_ClassInfo_, clinit$Names, allocate$Names);
	return class$;
}

$Class* Names::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com