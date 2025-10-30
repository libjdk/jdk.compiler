#include <com/sun/tools/javac/jvm/JNIWriter.h>

#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Flags.h>
#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Scope$LookupKind.h>
#include <com/sun/tools/javac/code/Scope$WriteableScope.h>
#include <com/sun/tools/javac/code/Scope.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$ModuleSymbol.h>
#include <com/sun/tools/javac/code/Symbol$PackageSymbol.h>
#include <com/sun/tools/javac/code/Symbol$TypeSymbol.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Symtab.h>
#include <com/sun/tools/javac/code/Type$ArrayType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/jvm/JNIWriter$1.h>
#include <com/sun/tools/javac/jvm/JNIWriter$EncoderType.h>
#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature$SignatureException.h>
#include <com/sun/tools/javac/jvm/JNIWriter$TypeSignature.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/Context$Key.h>
#include <com/sun/tools/javac/util/Context.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Log.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Options.h>
#include <com/sun/tools/javac/util/Pair.h>
#include <java/io/IOException.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <java/lang/AbstractStringBuilder.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Error.h>
#include <java/lang/Iterable.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/StandardLocation.h>
#include <jcpp.h>

#undef CLASS
#undef FIELDSTUB
#undef FINAL
#undef JNI
#undef MDL
#undef MTH
#undef NATIVE
#undef NATIVE_HEADER_OUTPUT
#undef NON_RECURSIVE
#undef STATIC
#undef SYNTHETIC
#undef TYP
#undef VAR
#undef VERBOSE

using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Flags = ::com::sun::tools::javac::code::Flags;
using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Scope = ::com::sun::tools::javac::code::Scope;
using $Scope$LookupKind = ::com::sun::tools::javac::code::Scope$LookupKind;
using $Scope$WriteableScope = ::com::sun::tools::javac::code::Scope$WriteableScope;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$ModuleSymbol = ::com::sun::tools::javac::code::Symbol$ModuleSymbol;
using $Symbol$PackageSymbol = ::com::sun::tools::javac::code::Symbol$PackageSymbol;
using $Symbol$TypeSymbol = ::com::sun::tools::javac::code::Symbol$TypeSymbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Symtab = ::com::sun::tools::javac::code::Symtab;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ArrayType = ::com::sun::tools::javac::code::Type$ArrayType;
using $Types = ::com::sun::tools::javac::code::Types;
using $JNIWriter$1 = ::com::sun::tools::javac::jvm::JNIWriter$1;
using $JNIWriter$EncoderType = ::com::sun::tools::javac::jvm::JNIWriter$EncoderType;
using $JNIWriter$TypeSignature = ::com::sun::tools::javac::jvm::JNIWriter$TypeSignature;
using $JNIWriter$TypeSignature$SignatureException = ::com::sun::tools::javac::jvm::JNIWriter$TypeSignature$SignatureException;
using $Option = ::com::sun::tools::javac::main::Option;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $Context = ::com::sun::tools::javac::util::Context;
using $Context$Key = ::com::sun::tools::javac::util::Context$Key;
using $List = ::com::sun::tools::javac::util::List;
using $Log = ::com::sun::tools::javac::util::Log;
using $Name = ::com::sun::tools::javac::util::Name;
using $Options = ::com::sun::tools::javac::util::Options;
using $Pair = ::com::sun::tools::javac::util::Pair;
using $IOException = ::java::io::IOException;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;
using $1Name = ::javax::lang::model::element::Name;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileManager = ::javax::tools::JavaFileManager;
using $JavaFileManager$Location = ::javax::tools::JavaFileManager$Location;
using $StandardLocation = ::javax::tools::StandardLocation;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _JNIWriter_FieldInfo_[] = {
	{"jniWriterKey", "Lcom/sun/tools/javac/util/Context$Key;", "Lcom/sun/tools/javac/util/Context$Key<Lcom/sun/tools/javac/jvm/JNIWriter;>;", $PROTECTED | $STATIC | $FINAL, $staticField(JNIWriter, jniWriterKey)},
	{"fileManager", "Ljavax/tools/JavaFileManager;", nullptr, $PRIVATE | $FINAL, $field(JNIWriter, fileManager)},
	{"types", "Lcom/sun/tools/javac/code/Types;", nullptr, 0, $field(JNIWriter, types)},
	{"syms", "Lcom/sun/tools/javac/code/Symtab;", nullptr, 0, $field(JNIWriter, syms)},
	{"log", "Lcom/sun/tools/javac/util/Log;", nullptr, $PRIVATE | $FINAL, $field(JNIWriter, log)},
	{"verbose", "Z", nullptr, $PRIVATE, $field(JNIWriter, verbose)},
	{"checkAll", "Z", nullptr, $PRIVATE, $field(JNIWriter, checkAll)},
	{"multiModuleMode", "Z", nullptr, $PUBLIC, $field(JNIWriter, multiModuleMode)},
	{"context", "Lcom/sun/tools/javac/util/Context;", nullptr, $PRIVATE, $field(JNIWriter, context)},
	{"isWindows", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JNIWriter, isWindows)},
	{}
};

$MethodInfo _JNIWriter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/Context;)V", nullptr, $PRIVATE, $method(static_cast<void(JNIWriter::*)($Context*)>(&JNIWriter::init$))},
	{"cppGuardBegin", "(Ljava/io/PrintWriter;)V", nullptr, $PROTECTED},
	{"cppGuardEnd", "(Ljava/io/PrintWriter;)V", nullptr, $PROTECTED},
	{"encode", "(Ljava/lang/CharSequence;Lcom/sun/tools/javac/jvm/JNIWriter$EncoderType;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($CharSequence*,$JNIWriter$EncoderType*)>(&JNIWriter::encode))},
	{"encodeChar", "(C)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(char16_t)>(&JNIWriter::encodeChar))},
	{"encodeMethod", "(Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Z)Ljava/lang/String;", nullptr, 0, nullptr, "com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException"},
	{"fileTop", "(Ljava/io/PrintWriter;)V", nullptr, $PROTECTED},
	{"guardBegin", "(Ljava/io/PrintWriter;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"guardEnd", "(Ljava/io/PrintWriter;)V", nullptr, $PROTECTED},
	{"hasFlag", "(Lcom/sun/tools/javac/code/Symbol;I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Symbol*,int32_t)>(&JNIWriter::hasFlag))},
	{"includes", "(Ljava/io/PrintWriter;)V", nullptr, $PROTECTED},
	{"instance", "(Lcom/sun/tools/javac/util/Context;)Lcom/sun/tools/javac/jvm/JNIWriter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<JNIWriter*(*)($Context*)>(&JNIWriter::instance))},
	{"isFinal", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Symbol*)>(&JNIWriter::isFinal))},
	{"isNative", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Symbol*)>(&JNIWriter::isNative))},
	{"isStatic", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Symbol*)>(&JNIWriter::isStatic))},
	{"isSynthetic", "(Lcom/sun/tools/javac/code/Symbol;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Symbol*)>(&JNIWriter::isSynthetic))},
	{"isalnum", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&JNIWriter::isalnum))},
	{"isprint", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&JNIWriter::isprint))},
	{"jniType", "(Lcom/sun/tools/javac/code/Type;)Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$String*(JNIWriter::*)($Type*)>(&JNIWriter::jniType))},
	{"lazyInit", "()V", nullptr, $PRIVATE, $method(static_cast<void(JNIWriter::*)()>(&JNIWriter::lazyInit))},
	{"needsHeader", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Z", nullptr, $PUBLIC},
	{"needsHeader", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Z)Z", nullptr, $PRIVATE, $method(static_cast<bool(JNIWriter::*)($Symbol$ClassSymbol*,bool)>(&JNIWriter::needsHeader))},
	{"printStaticDefines", "(Ljava/io/PrintWriter;Lcom/sun/tools/javac/util/Pair;)V", "(Ljava/io/PrintWriter;Lcom/sun/tools/javac/util/Pair<Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/code/Symbol$VarSymbol;>;)V", $STATIC, $method(static_cast<void(*)($PrintWriter*,$Pair*)>(&JNIWriter::printStaticDefines))},
	{"write", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)Ljavax/tools/FileObject;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/io/PrintWriter;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeMethods", "(Ljava/io/PrintWriter;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Ljava/lang/String;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException,com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException"},
	{"writeStatics", "(Ljava/io/PrintWriter;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _JNIWriter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.JNIWriter$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.jvm.JNIWriter$SimpleTypeVisitor", "com.sun.tools.javac.jvm.JNIWriter", "SimpleTypeVisitor", $STATIC},
	{"com.sun.tools.javac.jvm.JNIWriter$TypeSignature", "com.sun.tools.javac.jvm.JNIWriter", "TypeSignature", $PRIVATE | $STATIC},
	{"com.sun.tools.javac.jvm.JNIWriter$EncoderType", "com.sun.tools.javac.jvm.JNIWriter", "EncoderType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _JNIWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.jvm.JNIWriter",
	"java.lang.Object",
	nullptr,
	_JNIWriter_FieldInfo_,
	_JNIWriter_MethodInfo_,
	nullptr,
	nullptr,
	_JNIWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.JNIWriter$1,com.sun.tools.javac.jvm.JNIWriter$SimpleTypeVisitor,com.sun.tools.javac.jvm.JNIWriter$TypeSignature,com.sun.tools.javac.jvm.JNIWriter$TypeSignature$JvmTypeVisitor,com.sun.tools.javac.jvm.JNIWriter$TypeSignature$SignatureException,com.sun.tools.javac.jvm.JNIWriter$EncoderType"
};

$Object* allocate$JNIWriter($Class* clazz) {
	return $of($alloc(JNIWriter));
}

$Context$Key* JNIWriter::jniWriterKey = nullptr;
bool JNIWriter::isWindows = false;

JNIWriter* JNIWriter::instance($Context* context) {
	$init(JNIWriter);
	$var(JNIWriter, instance, $cast(JNIWriter, $nc(context)->get(JNIWriter::jniWriterKey)));
	if (instance == nullptr) {
		$assign(instance, $new(JNIWriter, context));
	}
	return instance;
}

void JNIWriter::init$($Context* context) {
	$nc(context)->put(JNIWriter::jniWriterKey, $of(this));
	$load($JavaFileManager);
	$set(this, fileManager, $cast($JavaFileManager, context->get($JavaFileManager::class$)));
	$set(this, log, $Log::instance(context));
	$var($Options, options, $Options::instance(context));
	$init($Option);
	this->verbose = $nc(options)->isSet($Option::VERBOSE);
	this->checkAll = options->isSet("javah:full"_s);
	$set(this, context, context);
}

void JNIWriter::lazyInit() {
	if (this->types == nullptr) {
		$set(this, types, $Types::instance(this->context));
	}
	if (this->syms == nullptr) {
		$set(this, syms, $Symtab::instance(this->context));
	}
}

bool JNIWriter::isSynthetic($Symbol* s) {
	$init(JNIWriter);
	return hasFlag(s, $Flags::SYNTHETIC);
}

bool JNIWriter::isStatic($Symbol* s) {
	$init(JNIWriter);
	return hasFlag(s, $Flags::STATIC);
}

bool JNIWriter::isFinal($Symbol* s) {
	$init(JNIWriter);
	return hasFlag(s, $Flags::FINAL);
}

bool JNIWriter::isNative($Symbol* s) {
	$init(JNIWriter);
	return hasFlag(s, $Flags::NATIVE);
}

bool JNIWriter::hasFlag($Symbol* m, int32_t flag) {
	$init(JNIWriter);
	return ((int64_t)($nc(m)->flags() & (uint64_t)(int64_t)flag)) != 0;
}

bool JNIWriter::needsHeader($Symbol$ClassSymbol* c) {
	lazyInit();
	bool var$0 = $nc(c)->isDirectlyOrIndirectlyLocal();
	if (var$0 || isSynthetic(c)) {
		return false;
	}
	return (this->checkAll) ? needsHeader($($nc(c)->outermostClass()), true) : needsHeader(c, false);
}

bool JNIWriter::needsHeader($Symbol$ClassSymbol* c, bool checkNestedClasses) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(c)->isDirectlyOrIndirectlyLocal();
	if (var$0 || isSynthetic(c)) {
		return false;
	}
	{
		$init($Scope$LookupKind);
		$var($Iterator, i$, $nc($($nc($nc(c)->members_field)->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, sym, $cast($Symbol, i$->next()));
			{
				$init($Kinds$Kind);
				if ($nc(sym)->kind == $Kinds$Kind::MTH && isNative(sym)) {
					return true;
				}
				{
					$var($Iterator, i$, $nc($($nc(sym)->getDeclarationAttributes()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Attribute$Compound, a, $cast($Attribute$Compound, i$->next()));
						{
							if ($nc($nc(a)->type)->tsym == $nc($nc(this->syms)->nativeHeaderType)->tsym) {
								return true;
							}
						}
					}
				}
			}
		}
	}
	if (checkNestedClasses) {
		{
			$init($Scope$LookupKind);
			$var($Iterator, i$, $nc($($nc(c->members_field)->getSymbols($Scope$LookupKind::NON_RECURSIVE)))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Symbol, sym, $cast($Symbol, i$->next()));
				{
					$init($Kinds$Kind);
					if (($nc(sym)->kind == $Kinds$Kind::TYP) && needsHeader(($cast($Symbol$ClassSymbol, sym)), true)) {
						return true;
					}
				}
			}
		}
	}
	return false;
}

$FileObject* JNIWriter::write($Symbol$ClassSymbol* c) {
	$useLocalCurrentObjectStackCache();
	$var($String, className, $nc($($nc(c)->flatName()))->toString());
	$var($JavaFileManager$Location, outLocn, nullptr);
	if (this->multiModuleMode) {
		$init($Kinds$Kind);
		$var($Symbol$ModuleSymbol, msym, $nc(c->owner)->kind == $Kinds$Kind::MDL ? $cast($Symbol$ModuleSymbol, c->owner) : $nc($(c->packge()))->modle);
		$init($StandardLocation);
		$assign(outLocn, $nc(this->fileManager)->getLocationForModule(static_cast<$JavaFileManager$Location*>($StandardLocation::NATIVE_HEADER_OUTPUT), $($nc($nc(msym)->name)->toString())));
	} else {
		$init($StandardLocation);
		$assign(outLocn, $StandardLocation::NATIVE_HEADER_OUTPUT);
	}
	$var($FileObject, outFile, $nc(this->fileManager)->getFileForOutput(outLocn, ""_s, $$str({$($nc(className)->replaceAll("[.$]"_s, "_"_s)), ".h"_s}), nullptr));
	$var($PrintWriter, out, $new($PrintWriter, $($nc(outFile)->openWriter())));
	{
		$var($Throwable, var$0, nullptr);
		try {
			write(out, c);
			if (this->verbose) {
				$nc(this->log)->printVerbose("wrote.file"_s, $$new($ObjectArray, {$($of($nc(outFile)->getName()))}));
			}
			out->close();
			$assign(out, nullptr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (out != nullptr) {
				out->close();
				$nc(outFile)->delete$();
				$assign(outFile, nullptr);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return outFile;
}

void JNIWriter::write($PrintWriter* out, $Symbol$ClassSymbol* sym) {
	lazyInit();
	try {
		$init($JNIWriter$EncoderType);
		$var($String, cname, encode($nc(sym)->fullname, $JNIWriter$EncoderType::CLASS));
		fileTop(out);
		includes(out);
		guardBegin(out, cname);
		cppGuardBegin(out);
		writeStatics(out, sym);
		writeMethods(out, sym, cname);
		cppGuardEnd(out);
		guardEnd(out);
	} catch ($JNIWriter$TypeSignature$SignatureException& e) {
		$throwNew($IOException, static_cast<$Throwable*>(e));
	}
}

void JNIWriter::writeStatics($PrintWriter* out, $Symbol$ClassSymbol* sym) {
	$useLocalCurrentObjectStackCache();
	$var($1List, clist, $new($ArrayList));
	{
		$var($Symbol$ClassSymbol, cd, sym);
		for (; cd != nullptr; $assign(cd, $cast($Symbol$ClassSymbol, $nc($($nc(cd)->getSuperclass()))->tsym))) {
			clist->add(cd);
		}
	}
	$Collections::reverse(clist);
	{
		$var($Iterator, i$, clist->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol$ClassSymbol, cd, $cast($Symbol$ClassSymbol, i$->next()));
			{
				{
					$var($Iterator, i$, $nc($($cast($List, $nc(cd)->getEnclosedElements())))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Symbol, i, $cast($Symbol, i$->next()));
						{
							bool var$0 = isFinal(i);
							$init($Kinds$Kind);
							if (var$0 && $nc(i)->isStatic() && i->kind == $Kinds$Kind::VAR) {
								$var($Symbol$VarSymbol, v, $cast($Symbol$VarSymbol, i));
								if (v->getConstantValue() != nullptr) {
									$var($Pair, p, $new($Pair, sym, v));
									printStaticDefines(out, p);
								}
							}
						}
					}
				}
			}
		}
	}
}

void JNIWriter::printStaticDefines($PrintWriter* out, $Pair* p) {
	$init(JNIWriter);
	$useLocalCurrentObjectStackCache();
	$var($Symbol$ClassSymbol, cls, $cast($Symbol$ClassSymbol, $nc(p)->fst));
	$var($Symbol$VarSymbol, f, $cast($Symbol$VarSymbol, p->snd));
	$var($Object, value, $nc(f)->getConstantValue());
	$var($String, valueStr, nullptr);
	$init($JNIWriter$1);
	{
		$var($Character, ch, nullptr)
		float fv = 0;
		double d = 0;
		switch ($nc($JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc(($($nc($($cast($Type, f->asType())))->getKind())))->ordinal())) {
		case 1:
			{
				$assign(valueStr, $nc(($cast($Boolean, value)))->booleanValue() ? "1L"_s : "0L"_s);
				break;
			}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{
				$assign(valueStr, $str({$($nc($of(value))->toString()), "L"_s}));
				break;
			}
		case 5:
			{
				$assign(valueStr, $str({$($nc($of(value))->toString()), ((JNIWriter::isWindows) ? "i64"_s : "LL"_s)}));
				break;
			}
		case 6:
			{
				$assign(ch, $cast($Character, value));
				$assign(valueStr, $str({$($String::valueOf((int32_t)(((int32_t)$nc(ch)->charValue()) & (uint32_t)0x0000FFFF))), "L"_s}));
				break;
			}
		case 7:
			{
				fv = $nc(($cast($Float, value)))->floatValue();
				$assign(valueStr, ($Float::isInfinite(fv)) ? $str({((fv < 0) ? "-"_s : ""_s), "Inff"_s}) : $str({$($nc($of(value))->toString()), "f"_s}));
				break;
			}
		case 8:
			{
				d = $nc(($cast($Double, value)))->doubleValue();
				$assign(valueStr, ($Double::isInfinite(d)) ? $str({((d < 0) ? "-"_s : ""_s), "InfD"_s}) : $nc($of(value))->toString());
				break;
			}
		default:
			{
				$assign(valueStr, nullptr);
			}
		}
	}
	if (valueStr != nullptr) {
		$nc(out)->print("#undef "_s);
		$init($JNIWriter$EncoderType);
		$var($String, cname, encode($($nc(cls)->getQualifiedName()), $JNIWriter$EncoderType::CLASS));
		$var($String, fname, encode($(f->getSimpleName()), $JNIWriter$EncoderType::FIELDSTUB));
		out->println($$str({cname, "_"_s, fname}));
		out->print($$str({"#define "_s, cname, "_"_s}));
		out->println($$str({fname, " "_s, valueStr}));
	}
}

void JNIWriter::writeMethods($PrintWriter* out, $Symbol$ClassSymbol* sym, $String* cname) {
	$useLocalCurrentObjectStackCache();
	$var($1List, classmethods, $nc(sym)->getEnclosedElements());
	{
		$var($Iterator, i$, $nc(classmethods)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Symbol, md, $cast($Symbol, i$->next()));
			{
				if (isNative(md)) {
					$var($JNIWriter$TypeSignature, newtypesig, $new($JNIWriter$TypeSignature, this->types));
					$var($CharSequence, methodName, $nc(md)->getSimpleName());
					bool isOverloaded = false;
					{
						$var($Iterator, i$, classmethods->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Symbol, md2, $cast($Symbol, i$->next()));
							{
								bool var$0 = (md2 != md) && ($nc($of(methodName))->equals($($nc(md2)->getSimpleName())));
								if (var$0 && isNative(md2)) {
									isOverloaded = true;
								}
							}
						}
					}
					$nc(out)->println("/*"_s);
					out->println($$str({" * Class:     "_s, cname}));
					$init($JNIWriter$EncoderType);
					out->println($$str({" * Method:    "_s, $(encode(methodName, $JNIWriter$EncoderType::FIELDSTUB))}));
					out->println($$str({" * Signature: "_s, $(newtypesig->getSignature(md->type))}));
					out->println(" */"_s);
					$var($String, var$1, $$str({"JNIEXPORT "_s, $(jniType($($nc(this->types)->erasure($($nc(md->type)->getReturnType()))))), " JNICALL "_s}));
					out->println($$concat(var$1, $(encodeMethod(md, sym, isOverloaded))));
					out->print("  (JNIEnv *, "_s);
					out->print((md->isStatic()) ? "jclass"_s : "jobject"_s);
					{
						$var($Iterator, i$, $nc($($nc(this->types)->erasure($($nc(md->type)->getParameterTypes()))))->iterator());
						for (; $nc(i$)->hasNext();) {
							$var($Type, arg, $cast($Type, i$->next()));
							{
								out->print(", "_s);
								out->print($(jniType(arg)));
							}
						}
					}
					out->println(");"_s);
					out->println();
				}
			}
		}
	}
}

$String* JNIWriter::jniType($Type* t) {
	$useLocalCurrentObjectStackCache();
	$init($JNIWriter$1);
	switch ($nc($JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc(($($nc(t)->getKind())))->ordinal())) {
	case 9:
		{
			{
				$var($Type, ct, $cast($Type, $nc(($cast($Type$ArrayType, t)))->getComponentType()));
				switch ($nc($JNIWriter$1::$SwitchMap$javax$lang$model$type$TypeKind)->get($nc(($($nc(ct)->getKind())))->ordinal())) {
				case 1:
					{
						return "jbooleanArray"_s;
					}
				case 2:
					{
						return "jbyteArray"_s;
					}
				case 6:
					{
						return "jcharArray"_s;
					}
				case 3:
					{
						return "jshortArray"_s;
					}
				case 4:
					{
						return "jintArray"_s;
					}
				case 5:
					{
						return "jlongArray"_s;
					}
				case 7:
					{
						return "jfloatArray"_s;
					}
				case 8:
					{
						return "jdoubleArray"_s;
					}
				case 9:
					{}
				case 10:
					{
						return "jobjectArray"_s;
					}
				default:
					{
						$throwNew($Error, $(ct->toString()));
					}
				}
			}
		}
	case 11:
		{
			return "void"_s;
		}
	case 1:
		{
			return "jboolean"_s;
		}
	case 2:
		{
			return "jbyte"_s;
		}
	case 6:
		{
			return "jchar"_s;
		}
	case 3:
		{
			return "jshort"_s;
		}
	case 4:
		{
			return "jint"_s;
		}
	case 5:
		{
			return "jlong"_s;
		}
	case 7:
		{
			return "jfloat"_s;
		}
	case 8:
		{
			return "jdouble"_s;
		}
	case 10:
		{
			{
				if ($nc(t->tsym)->type == $nc(this->syms)->stringType) {
					return "jstring"_s;
				} else if ($nc(this->types)->isAssignable(t, $nc(this->syms)->throwableType)) {
					return "jthrowable"_s;
				} else if ($nc(this->types)->isAssignable(t, $nc(this->syms)->classType)) {
					return "jclass"_s;
				} else {
					return "jobject"_s;
				}
			}
		}
	}
	$Assert::check(false, "jni unknown type"_s);
	return nullptr;
}

void JNIWriter::fileTop($PrintWriter* out) {
	$nc(out)->println("/* DO NOT EDIT THIS FILE - it is machine generated */"_s);
}

void JNIWriter::includes($PrintWriter* out) {
	$nc(out)->println("#include <jni.h>"_s);
}

void JNIWriter::cppGuardBegin($PrintWriter* out) {
	$nc(out)->println("#ifdef __cplusplus"_s);
	out->println("extern \"C\" {"_s);
	out->println("#endif"_s);
}

void JNIWriter::cppGuardEnd($PrintWriter* out) {
	$nc(out)->println("#ifdef __cplusplus"_s);
	out->println("}"_s);
	out->println("#endif"_s);
}

void JNIWriter::guardBegin($PrintWriter* out, $String* cname) {
	$useLocalCurrentObjectStackCache();
	$nc(out)->println($$str({"/* Header for class "_s, cname, " */"_s}));
	out->println();
	out->println($$str({"#ifndef _Included_"_s, cname}));
	out->println($$str({"#define _Included_"_s, cname}));
}

void JNIWriter::guardEnd($PrintWriter* out) {
	$nc(out)->println("#endif"_s);
}

$String* JNIWriter::encodeMethod($Symbol* msym, $Symbol$ClassSymbol* clazz, bool isOverloaded) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, result, $new($StringBuilder, 100));
	result->append("Java_"_s);
	$init($JNIWriter$EncoderType);
	result->append($(encode($($nc($nc(clazz)->flatname)->toString()), $JNIWriter$EncoderType::JNI)));
	result->append(u'_');
	result->append($(encode($($nc(msym)->getSimpleName()), $JNIWriter$EncoderType::JNI)));
	if (isOverloaded) {
		$var($JNIWriter$TypeSignature, typeSig, $new($JNIWriter$TypeSignature, this->types));
		$var($StringBuilder, sig, typeSig->getParameterSignature($nc(msym)->type, true));
		result->append("__"_s)->append($(encode(sig, $JNIWriter$EncoderType::JNI)));
	}
	return result->toString();
}

$String* JNIWriter::encode($CharSequence* name, $JNIWriter$EncoderType* mtype) {
	$init(JNIWriter);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, result, $new($StringBuilder, 100));
	int32_t length = $nc(name)->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t ch = name->charAt(i);
		if (isalnum(ch)) {
			result->append(ch);
			continue;
		}
		$init($JNIWriter$1);
		switch ($nc($JNIWriter$1::$SwitchMap$com$sun$tools$javac$jvm$JNIWriter$EncoderType)->get($nc((mtype))->ordinal())) {
		case 1:
			{
				switch (ch) {
				case u'.':
					{}
				case u'_':
					{
						result->append("_"_s);
						break;
					}
				case u'$':
					{
						result->append("__"_s);
						break;
					}
				default:
					{
						result->append($(encodeChar(ch)));
					}
				}
				break;
			}
		case 2:
			{
				switch (ch) {
				case u'/':
					{}
				case u'.':
					{
						result->append("_"_s);
						break;
					}
				case u'_':
					{
						result->append("_1"_s);
						break;
					}
				case u';':
					{
						result->append("_2"_s);
						break;
					}
				case u'[':
					{
						result->append("_3"_s);
						break;
					}
				default:
					{
						result->append($(encodeChar(ch)));
					}
				}
				break;
			}
		case 3:
			{
				result->append(isprint(ch) ? $($of($Character::valueOf(ch))) : $($of(encodeChar(ch))));
				break;
			}
		case 4:
			{
				result->append(ch == u'_' ? $($of($Character::valueOf(ch))) : $($of(encodeChar(ch))));
				break;
			}
		default:
			{
				result->append($(encodeChar(ch)));
			}
		}
	}
	return result->toString();
}

$String* JNIWriter::encodeChar(char16_t ch) {
	$init(JNIWriter);
	$useLocalCurrentObjectStackCache();
	$var($String, s, $Integer::toHexString(ch));
	int32_t nzeros = 5 - $nc(s)->length();
	$var($chars, result, $new($chars, 6));
	result->set(0, u'_');
	for (int32_t i = 1; i <= nzeros; ++i) {
		result->set(i, u'0');
	}
	{
		int32_t i = nzeros + 1;
		int32_t j = 0;
		for (; i < 6; ++i, ++j) {
			result->set(i, s->charAt(j));
		}
	}
	return $new($String, result);
}

bool JNIWriter::isalnum(char16_t ch) {
	$init(JNIWriter);
	return ch <= 127 && ((ch >= u'A' && ch <= u'Z') || (ch >= u'a' && ch <= u'z') || (ch >= u'0' && ch <= u'9'));
}

bool JNIWriter::isprint(char16_t ch) {
	$init(JNIWriter);
	return ch >= 32 && ch <= 126;
}

void clinit$JNIWriter($Class* class$) {
	$assignStatic(JNIWriter::jniWriterKey, $new($Context$Key));
	JNIWriter::isWindows = $nc($($System::getProperty("os.name"_s)))->startsWith("Windows"_s);
}

JNIWriter::JNIWriter() {
}

$Class* JNIWriter::load$($String* name, bool initialize) {
	$loadClass(JNIWriter, name, initialize, &_JNIWriter_ClassInfo_, clinit$JNIWriter, allocate$JNIWriter);
	return class$;
}

$Class* JNIWriter::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com