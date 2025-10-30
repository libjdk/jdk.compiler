#include <com/sun/tools/javac/jvm/ClassReader$11.h>

#include <com/sun/tools/javac/code/Kinds$Kind.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type$ClassType.h>
#include <com/sun/tools/javac/code/Type$MethodType.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/jvm/ClassFile$Version.h>
#include <com/sun/tools/javac/jvm/ClassReader$AttributeReader.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/jvm/PoolReader.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Name$NameMapper.h>
#include <com/sun/tools/javac/util/Name.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MTH
#undef TYP

using $Kinds$Kind = ::com::sun::tools::javac::code::Kinds$Kind;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Type$ClassType = ::com::sun::tools::javac::code::Type$ClassType;
using $Type$MethodType = ::com::sun::tools::javac::code::Type$MethodType;
using $ClassFile$Version = ::com::sun::tools::javac::jvm::ClassFile$Version;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AttributeReader = ::com::sun::tools::javac::jvm::ClassReader$AttributeReader;
using $PoolReader = ::com::sun::tools::javac::jvm::PoolReader;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Name$NameMapper = ::com::sun::tools::javac::util::Name$NameMapper;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ClassReader$11$$Lambda$sigToTypeParams : public $Name$NameMapper {
	$class(ClassReader$11$$Lambda$sigToTypeParams, $NO_CLASS_INIT, $Name$NameMapper)
public:
	void init$($ClassReader* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* map($bytes* sig, int32_t offset, int32_t len) override {
		 return $of($nc(inst$)->sigToTypeParams(sig, offset, len));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ClassReader$11$$Lambda$sigToTypeParams>());
	}
	$ClassReader* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ClassReader$11$$Lambda$sigToTypeParams::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$11$$Lambda$sigToTypeParams, inst$)},
	{}
};
$MethodInfo ClassReader$11$$Lambda$sigToTypeParams::methodInfos[3] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;)V", nullptr, $PUBLIC, $method(static_cast<void(ClassReader$11$$Lambda$sigToTypeParams::*)($ClassReader*)>(&ClassReader$11$$Lambda$sigToTypeParams::init$))},
	{"map", "([BII)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ClassReader$11$$Lambda$sigToTypeParams::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.tools.javac.jvm.ClassReader$11$$Lambda$sigToTypeParams",
	"java.lang.Object",
	"com.sun.tools.javac.util.Name$NameMapper",
	fieldInfos,
	methodInfos
};
$Class* ClassReader$11$$Lambda$sigToTypeParams::load$($String* name, bool initialize) {
	$loadClass(ClassReader$11$$Lambda$sigToTypeParams, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ClassReader$11$$Lambda$sigToTypeParams::class$ = nullptr;

$FieldInfo _ClassReader$11_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$11, this$0)},
	{}
};

$MethodInfo _ClassReader$11_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/jvm/ClassFile$Version;Ljava/util/Set;)V", nullptr, 0, $method(static_cast<void(ClassReader$11::*)($ClassReader*,$Name*,$ClassFile$Version*,$Set*)>(&ClassReader$11::init$))},
	{"read", "(Lcom/sun/tools/javac/code/Symbol;I)V", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _ClassReader$11_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.ClassReader",
	"initAttributeReaders",
	"()V"
};

$InnerClassInfo _ClassReader$11_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassReader$11", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.ClassReader$AttributeReader", "com.sun.tools.javac.jvm.ClassReader", "AttributeReader", $PROTECTED | $ABSTRACT},
	{}
};

$ClassInfo _ClassReader$11_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassReader$11",
	"com.sun.tools.javac.jvm.ClassReader$AttributeReader",
	nullptr,
	_ClassReader$11_FieldInfo_,
	_ClassReader$11_MethodInfo_,
	nullptr,
	&_ClassReader$11_EnclosingMethodInfo_,
	_ClassReader$11_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassReader"
};

$Object* allocate$ClassReader$11($Class* clazz) {
	return $of($alloc(ClassReader$11));
}

void ClassReader$11::init$($ClassReader* this$0, $Name* name, $ClassFile$Version* version, $Set* kinds) {
	$set(this, this$0, this$0);
	$ClassReader$AttributeReader::init$(this$0, name, version, kinds);
}

void ClassReader$11::read($Symbol* sym, int32_t attrLen) {
	$useLocalCurrentObjectStackCache();
	$init($Kinds$Kind);
	if ($nc(sym)->kind == $Kinds$Kind::TYP) {
		$var($Symbol$ClassSymbol, c, $cast($Symbol$ClassSymbol, sym));
		this->this$0->readingClassAttr = true;
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($Type$ClassType, ct1, $cast($Type$ClassType, c->type));
				$Assert::check($equals(c, this->this$0->currentOwner));
				$set($nc(ct1), typarams_field, $cast($List, $nc($($nc(this->this$0->poolReader)->getName(this->this$0->nextChar())))->map(static_cast<$Name$NameMapper*>($$new(ClassReader$11$$Lambda$sigToTypeParams, this->this$0)))));
				$set(ct1, supertype_field, this->this$0->sigToType());
				$var($ListBuffer, is, $new($ListBuffer));
				while (this->this$0->sigp != this->this$0->siglimit) {
					is->append($(this->this$0->sigToType()));
				}
				$set(ct1, interfaces_field, is->toList());
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->this$0->readingClassAttr = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$var($List, thrown, $nc(sym->type)->getThrownTypes());
		$set(sym, type, $nc(this->this$0->poolReader)->getType(this->this$0->nextChar()));
		if (sym->kind == $Kinds$Kind::MTH && $nc($($nc(sym->type)->getThrownTypes()))->isEmpty()) {
			$set($nc($($nc(sym->type)->asMethodType())), thrown, thrown);
		}
	}
}

ClassReader$11::ClassReader$11() {
}

$Class* ClassReader$11::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ClassReader$11$$Lambda$sigToTypeParams::classInfo$.name)) {
			return ClassReader$11$$Lambda$sigToTypeParams::load$(name, initialize);
		}
	}
	$loadClass(ClassReader$11, name, initialize, &_ClassReader$11_ClassInfo_, allocate$ClassReader$11);
	return class$;
}

$Class* ClassReader$11::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com