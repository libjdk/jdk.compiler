#include <com/sun/tools/javac/jvm/Items$1.h>

#include <com/sun/tools/javac/jvm/Items$Item.h>
#include <com/sun/tools/javac/jvm/Items.h>
#include <jcpp.h>

using $Items = ::com::sun::tools::javac::jvm::Items;
using $Items$Item = ::com::sun::tools::javac::jvm::Items$Item;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _Items$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/Items;", nullptr, $FINAL | $SYNTHETIC, $field(Items$1, this$0)},
	{}
};

$MethodInfo _Items$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/Items;I)V", nullptr, 0, $method(static_cast<void(Items$1::*)($Items*,int32_t)>(&Items$1::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Items$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.jvm.Items",
	"<init>",
	"(Lcom/sun/tools/javac/jvm/PoolWriter;Lcom/sun/tools/javac/jvm/Code;Lcom/sun/tools/javac/code/Symtab;Lcom/sun/tools/javac/code/Types;)V"
};

$InnerClassInfo _Items$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.Items$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.jvm.Items$Item", "com.sun.tools.javac.jvm.Items", "Item", $ABSTRACT},
	{}
};

$ClassInfo _Items$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.Items$1",
	"com.sun.tools.javac.jvm.Items$Item",
	nullptr,
	_Items$1_FieldInfo_,
	_Items$1_MethodInfo_,
	nullptr,
	&_Items$1_EnclosingMethodInfo_,
	_Items$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.Items"
};

$Object* allocate$Items$1($Class* clazz) {
	return $of($alloc(Items$1));
}

void Items$1::init$($Items* this$0, int32_t typecode) {
	$set(this, this$0, this$0);
	$Items$Item::init$(this$0, typecode);
}

$String* Items$1::toString() {
	return "void"_s;
}

Items$1::Items$1() {
}

$Class* Items$1::load$($String* name, bool initialize) {
	$loadClass(Items$1, name, initialize, &_Items$1_ClassInfo_, allocate$Items$1);
	return class$;
}

$Class* Items$1::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com