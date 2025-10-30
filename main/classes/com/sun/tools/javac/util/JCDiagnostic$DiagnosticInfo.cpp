#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo.h>

#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$1.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Error.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Note.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Warning.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <jcpp.h>

using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$1 = ::com::sun::tools::javac::util::JCDiagnostic$1;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JCDiagnostic$Error = ::com::sun::tools::javac::util::JCDiagnostic$Error;
using $JCDiagnostic$Fragment = ::com::sun::tools::javac::util::JCDiagnostic$Fragment;
using $JCDiagnostic$Note = ::com::sun::tools::javac::util::JCDiagnostic$Note;
using $JCDiagnostic$Warning = ::com::sun::tools::javac::util::JCDiagnostic$Warning;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _JCDiagnostic$DiagnosticInfo_FieldInfo_[] = {
	{"type", "Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;", nullptr, 0, $field(JCDiagnostic$DiagnosticInfo, type)},
	{"prefix", "Ljava/lang/String;", nullptr, 0, $field(JCDiagnostic$DiagnosticInfo, prefix)},
	{"code", "Ljava/lang/String;", nullptr, 0, $field(JCDiagnostic$DiagnosticInfo, code)},
	{"args", "[Ljava/lang/Object;", nullptr, 0, $field(JCDiagnostic$DiagnosticInfo, args)},
	{}
};

$MethodInfo _JCDiagnostic$DiagnosticInfo_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(JCDiagnostic$DiagnosticInfo::*)($JCDiagnostic$DiagnosticType*,$String*,$String*,$ObjectArray*)>(&JCDiagnostic$DiagnosticInfo::init$))},
	{"getArgs", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getCode", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"key", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"of", "(Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticType;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Lcom/sun/tools/javac/util/JCDiagnostic$DiagnosticInfo;", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<JCDiagnostic$DiagnosticInfo*(*)($JCDiagnostic$DiagnosticType*,$String*,$String*,$ObjectArray*)>(&JCDiagnostic$DiagnosticInfo::of))},
	{"setArgs", "([Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JCDiagnostic$DiagnosticInfo_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticInfo", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JCDiagnostic$DiagnosticInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.util.JCDiagnostic$DiagnosticInfo",
	"java.lang.Object",
	nullptr,
	_JCDiagnostic$DiagnosticInfo_FieldInfo_,
	_JCDiagnostic$DiagnosticInfo_MethodInfo_,
	nullptr,
	nullptr,
	_JCDiagnostic$DiagnosticInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.JCDiagnostic"
};

$Object* allocate$JCDiagnostic$DiagnosticInfo($Class* clazz) {
	return $of($alloc(JCDiagnostic$DiagnosticInfo));
}

void JCDiagnostic$DiagnosticInfo::init$($JCDiagnostic$DiagnosticType* type, $String* prefix, $String* code, $ObjectArray* args) {
	$set(this, type, type);
	$set(this, prefix, prefix);
	$set(this, code, code);
	$set(this, args, args);
}

$String* JCDiagnostic$DiagnosticInfo::key() {
	return $str({this->prefix, "."_s, $nc(this->type)->key, "."_s, this->code});
}

JCDiagnostic$DiagnosticInfo* JCDiagnostic$DiagnosticInfo::of($JCDiagnostic$DiagnosticType* type, $String* prefix, $String* code, $ObjectArray* args) {
	$init($JCDiagnostic$1);
	switch ($nc($JCDiagnostic$1::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->get($nc((type))->ordinal())) {
	case 1:
		{
			return $new($JCDiagnostic$Error, prefix, code, args);
		}
	case 2:
		{
			return $new($JCDiagnostic$Warning, prefix, code, args);
		}
	case 3:
		{
			return $new($JCDiagnostic$Note, prefix, code, args);
		}
	case 4:
		{
			return $new($JCDiagnostic$Fragment, prefix, code, args);
		}
	default:
		{
			$Assert::error($$str({"Wrong diagnostic type: "_s, type}));
			return nullptr;
		}
	}
}

$String* JCDiagnostic$DiagnosticInfo::getCode() {
	return this->code;
}

$ObjectArray* JCDiagnostic$DiagnosticInfo::getArgs() {
	return this->args;
}

void JCDiagnostic$DiagnosticInfo::setArgs($ObjectArray* args) {
	$set(this, args, args);
}

JCDiagnostic$DiagnosticInfo::JCDiagnostic$DiagnosticInfo() {
}

$Class* JCDiagnostic$DiagnosticInfo::load$($String* name, bool initialize) {
	$loadClass(JCDiagnostic$DiagnosticInfo, name, initialize, &_JCDiagnostic$DiagnosticInfo_ClassInfo_, allocate$JCDiagnostic$DiagnosticInfo);
	return class$;
}

$Class* JCDiagnostic$DiagnosticInfo::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com