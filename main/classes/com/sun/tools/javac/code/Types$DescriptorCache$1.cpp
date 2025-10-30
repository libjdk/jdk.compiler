#include <com/sun/tools/javac/code/Types$DescriptorCache$1.h>

#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor.h>
#include <com/sun/tools/javac/code/Types$DescriptorCache.h>
#include <com/sun/tools/javac/code/Types.h>
#include <com/sun/tools/javac/util/List.h>
#include <jcpp.h>

using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $Types = ::com::sun::tools::javac::code::Types;
using $Types$DescriptorCache = ::com::sun::tools::javac::code::Types$DescriptorCache;
using $Types$DescriptorCache$FunctionDescriptor = ::com::sun::tools::javac::code::Types$DescriptorCache$FunctionDescriptor;
using $List = ::com::sun::tools::javac::util::List;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _Types$DescriptorCache$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/tools/javac/code/Types$DescriptorCache;", nullptr, $FINAL | $SYNTHETIC, $field(Types$DescriptorCache$1, this$1)},
	{"val$bestSoFar", "Lcom/sun/tools/javac/code/Symbol;", nullptr, $FINAL | $SYNTHETIC, $field(Types$DescriptorCache$1, val$bestSoFar)},
	{}
};

$MethodInfo _Types$DescriptorCache$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/Types$DescriptorCache;Lcom/sun/tools/javac/code/Symbol;Lcom/sun/tools/javac/code/Symbol;)V", nullptr, 0, $method(static_cast<void(Types$DescriptorCache$1::*)($Types$DescriptorCache*,$Symbol*,$Symbol*)>(&Types$DescriptorCache$1::init$))},
	{"getType", "(Lcom/sun/tools/javac/code/Type;)Lcom/sun/tools/javac/code/Type;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Types$DescriptorCache$1_EnclosingMethodInfo_ = {
	"com.sun.tools.javac.code.Types$DescriptorCache",
	"mergeDescriptors",
	"(Lcom/sun/tools/javac/code/Symbol$TypeSymbol;Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/Types$DescriptorCache$FunctionDescriptor;"
};

$InnerClassInfo _Types$DescriptorCache$1_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.Types$DescriptorCache", "com.sun.tools.javac.code.Types", "DescriptorCache", 0},
	{"com.sun.tools.javac.code.Types$DescriptorCache$1", nullptr, nullptr, 0},
	{"com.sun.tools.javac.code.Types$DescriptorCache$FunctionDescriptor", "com.sun.tools.javac.code.Types$DescriptorCache", "FunctionDescriptor", 0},
	{"com.sun.tools.javac.code.Symbol$TypeSymbol", "com.sun.tools.javac.code.Symbol", "TypeSymbol", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _Types$DescriptorCache$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.code.Types$DescriptorCache$1",
	"com.sun.tools.javac.code.Types$DescriptorCache$FunctionDescriptor",
	nullptr,
	_Types$DescriptorCache$1_FieldInfo_,
	_Types$DescriptorCache$1_MethodInfo_,
	nullptr,
	&_Types$DescriptorCache$1_EnclosingMethodInfo_,
	_Types$DescriptorCache$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.Types"
};

$Object* allocate$Types$DescriptorCache$1($Class* clazz) {
	return $of($alloc(Types$DescriptorCache$1));
}

void Types$DescriptorCache$1::init$($Types$DescriptorCache* this$1, $Symbol* descSym, $Symbol* val$bestSoFar) {
	$set(this, this$1, this$1);
	$set(this, val$bestSoFar, val$bestSoFar);
	$Types$DescriptorCache$FunctionDescriptor::init$(this$1, descSym);
}

$Type* Types$DescriptorCache$1::getType($Type* origin) {
	$useLocalCurrentObjectStackCache();
	$var($Type, mt, $nc(this->this$1->this$0)->memberType(origin, $(getSymbol())));
	return $nc(this->this$1->this$0)->createMethodTypeWithThrown(mt, $($nc($nc(this->val$bestSoFar)->type)->getThrownTypes()));
}

Types$DescriptorCache$1::Types$DescriptorCache$1() {
}

$Class* Types$DescriptorCache$1::load$($String* name, bool initialize) {
	$loadClass(Types$DescriptorCache$1, name, initialize, &_Types$DescriptorCache$1_ClassInfo_, allocate$Types$DescriptorCache$1);
	return class$;
}

$Class* Types$DescriptorCache$1::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com