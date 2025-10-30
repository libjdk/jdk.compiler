#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$2.h>

#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/BiPredicate.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Resolve$MethodResolutionDiagHelper$TemplateArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve$MethodResolutionDiagHelper$Template = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $BiPredicate = ::java::util::function::BiPredicate;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0 : public $BiPredicate {
	$class(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$(Resolve$MethodResolutionDiagHelper$2* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* o, Object$* ts) override {
		 return $nc(inst$)->lambda$$0(o, $cast($List, ts));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0>());
	}
	Resolve$MethodResolutionDiagHelper$2* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0, inst$)},
	{}
};
$MethodInfo Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$2;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::*)(Resolve$MethodResolutionDiagHelper$2*)>(&Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::init$))},
	{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0",
	"java.lang.Object",
	"java.util.function.BiPredicate",
	fieldInfos,
	methodInfos
};
$Class* Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::class$ = nullptr;

class Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1 : public $Predicate {
	$class(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Resolve$MethodResolutionDiagHelper$2* inst, $List* ts) {
		$set(this, inst$, inst);
		$set(this, ts, ts);
	}
	virtual bool test(Object$* o) override {
		 return $nc(inst$)->lambda$containsAny$1(ts, o);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1>());
	}
	Resolve$MethodResolutionDiagHelper$2* inst$ = nullptr;
	$List* ts = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, inst$)},
	{"ts", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, ts)},
	{}
};
$MethodInfo Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$2;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(static_cast<void(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::*)(Resolve$MethodResolutionDiagHelper$2*,$List*)>(&Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::load$($String* name, bool initialize) {
	$loadClass(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::class$ = nullptr;

$FieldInfo _Resolve$MethodResolutionDiagHelper$2_FieldInfo_[] = {
	{"containsPredicate", "Ljava/util/function/BiPredicate;", "Ljava/util/function/BiPredicate<Ljava/lang/Object;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", 0, $field(Resolve$MethodResolutionDiagHelper$2, containsPredicate)},
	{}
};

$MethodInfo _Resolve$MethodResolutionDiagHelper$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template;)V", nullptr, $TRANSIENT, $method(static_cast<void(Resolve$MethodResolutionDiagHelper$2::*)($String*,$Resolve$MethodResolutionDiagHelper$TemplateArray*)>(&Resolve$MethodResolutionDiagHelper$2::init$))},
	{"containsAny", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", 0},
	{"lambda$$0", "(Ljava/lang/Object;Lcom/sun/tools/javac/util/List;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Resolve$MethodResolutionDiagHelper$2::*)(Object$*,$List*)>(&Resolve$MethodResolutionDiagHelper$2::lambda$$0))},
	{"lambda$containsAny$1", "(Lcom/sun/tools/javac/util/List;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<bool(Resolve$MethodResolutionDiagHelper$2::*)($List*,Object$*)>(&Resolve$MethodResolutionDiagHelper$2::lambda$containsAny$1))},
	{"matches", "(Ljava/lang/Object;)Z", nullptr, 0},
	{}
};

$EnclosingMethodInfo _Resolve$MethodResolutionDiagHelper$2_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper",
	nullptr,
	nullptr
};

$InnerClassInfo _Resolve$MethodResolutionDiagHelper$2_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2", nullptr, nullptr, 0},
	{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "Template", $STATIC},
	{}
};

$ClassInfo _Resolve$MethodResolutionDiagHelper$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2",
	"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template",
	nullptr,
	_Resolve$MethodResolutionDiagHelper$2_FieldInfo_,
	_Resolve$MethodResolutionDiagHelper$2_MethodInfo_,
	nullptr,
	&_Resolve$MethodResolutionDiagHelper$2_EnclosingMethodInfo_,
	_Resolve$MethodResolutionDiagHelper$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.comp.Resolve"
};

$Object* allocate$Resolve$MethodResolutionDiagHelper$2($Class* clazz) {
	return $of($alloc(Resolve$MethodResolutionDiagHelper$2));
}

void Resolve$MethodResolutionDiagHelper$2::init$($String* key, $Resolve$MethodResolutionDiagHelper$TemplateArray* subTemplates) {
	$Resolve$MethodResolutionDiagHelper$Template::init$(key, subTemplates);
	$set(this, containsPredicate, static_cast<$BiPredicate*>($new(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0, this)));
}

bool Resolve$MethodResolutionDiagHelper$2::matches(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (!$Resolve$MethodResolutionDiagHelper$Template::matches(o)) {
		return false;
	}
	$var($JCDiagnostic, d, $cast($JCDiagnostic, o));
	$var($List, tvars, $cast($List, $nc($($nc(d)->getArgs()))->get(0)));
	return !containsAny(d, tvars);
}

bool Resolve$MethodResolutionDiagHelper$2::containsAny($JCDiagnostic* d, $List* ts) {
	$useLocalCurrentObjectStackCache();
	return $nc($($Stream::of($($nc(d)->getArgs()))))->anyMatch(static_cast<$Predicate*>($$new(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, this, ts)));
}

bool Resolve$MethodResolutionDiagHelper$2::lambda$containsAny$1($List* ts, Object$* o) {
	return $nc(this->containsPredicate)->test(o, ts);
}

bool Resolve$MethodResolutionDiagHelper$2::lambda$$0(Object$* o, $List* ts) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Type, type, nullptr);
		$var($JCDiagnostic, diagnostic, nullptr);
		bool var$0 = $instanceOf($Type, o);
		if (var$0) {
			$assign(type, $cast($Type, o));
			var$0 = true;
		}
		if (var$0) {
			return $nc(type)->containsAny(ts);
		} else {
			bool var$2 = $instanceOf($JCDiagnostic, o);
			if (var$2) {
				$assign(diagnostic, $cast($JCDiagnostic, o));
				var$2 = true;
			}
			if (var$2) {
				return containsAny(diagnostic, ts);
			} else {
				return false;
			}
		}
	}
}

Resolve$MethodResolutionDiagHelper$2::Resolve$MethodResolutionDiagHelper$2() {
}

$Class* Resolve$MethodResolutionDiagHelper$2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::classInfo$.name)) {
			return Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::load$(name, initialize);
		}
		if (name->equals(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::classInfo$.name)) {
			return Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::load$(name, initialize);
		}
	}
	$loadClass(Resolve$MethodResolutionDiagHelper$2, name, initialize, &_Resolve$MethodResolutionDiagHelper$2_ClassInfo_, allocate$Resolve$MethodResolutionDiagHelper$2);
	return class$;
}

$Class* Resolve$MethodResolutionDiagHelper$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com