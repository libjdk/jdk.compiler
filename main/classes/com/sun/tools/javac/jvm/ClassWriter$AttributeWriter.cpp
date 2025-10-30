#include <com/sun/tools/javac/jvm/ClassWriter$AttributeWriter.h>

#include <com/sun/tools/javac/code/Attribute$Array.h>
#include <com/sun/tools/javac/code/Attribute$Class.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/Attribute$Constant.h>
#include <com/sun/tools/javac/code/Attribute$Enum.h>
#include <com/sun/tools/javac/code/Attribute$Error.h>
#include <com/sun/tools/javac/code/Attribute$Visitor.h>
#include <com/sun/tools/javac/code/Attribute.h>
#include <com/sun/tools/javac/code/Symbol$VarSymbol.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/code/TypeTag.h>
#include <com/sun/tools/javac/jvm/ClassWriter$1.h>
#include <com/sun/tools/javac/jvm/ClassWriter.h>
#include <com/sun/tools/javac/jvm/PoolWriter.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/ByteBuffer.h>
#include <com/sun/tools/javac/util/Name.h>
#include <com/sun/tools/javac/util/Names.h>
#include <java/lang/AssertionError.h>
#include <jcpp.h>

#undef CLASS

using $AttributeArray = $Array<::com::sun::tools::javac::code::Attribute>;
using $Attribute = ::com::sun::tools::javac::code::Attribute;
using $Attribute$Array = ::com::sun::tools::javac::code::Attribute$Array;
using $Attribute$Class = ::com::sun::tools::javac::code::Attribute$Class;
using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Attribute$Constant = ::com::sun::tools::javac::code::Attribute$Constant;
using $Attribute$Enum = ::com::sun::tools::javac::code::Attribute$Enum;
using $Attribute$Error = ::com::sun::tools::javac::code::Attribute$Error;
using $Attribute$Visitor = ::com::sun::tools::javac::code::Attribute$Visitor;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Symbol$VarSymbol = ::com::sun::tools::javac::code::Symbol$VarSymbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $TypeTag = ::com::sun::tools::javac::code::TypeTag;
using $ClassWriter = ::com::sun::tools::javac::jvm::ClassWriter;
using $ClassWriter$1 = ::com::sun::tools::javac::jvm::ClassWriter$1;
using $PoolWriter = ::com::sun::tools::javac::jvm::PoolWriter;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ByteBuffer = ::com::sun::tools::javac::util::ByteBuffer;
using $Name = ::com::sun::tools::javac::util::Name;
using $Names = ::com::sun::tools::javac::util::Names;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

$FieldInfo _ClassWriter$AttributeWriter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/tools/javac/jvm/ClassWriter;", nullptr, $FINAL | $SYNTHETIC, $field(ClassWriter$AttributeWriter, this$0)},
	{}
};

$MethodInfo _ClassWriter$AttributeWriter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/jvm/ClassWriter;)V", nullptr, 0, $method(static_cast<void(ClassWriter$AttributeWriter::*)($ClassWriter*)>(&ClassWriter$AttributeWriter::init$))},
	{"visitArray", "(Lcom/sun/tools/javac/code/Attribute$Array;)V", nullptr, $PUBLIC},
	{"visitClass", "(Lcom/sun/tools/javac/code/Attribute$Class;)V", nullptr, $PUBLIC},
	{"visitCompound", "(Lcom/sun/tools/javac/code/Attribute$Compound;)V", nullptr, $PUBLIC},
	{"visitConstant", "(Lcom/sun/tools/javac/code/Attribute$Constant;)V", nullptr, $PUBLIC},
	{"visitEnum", "(Lcom/sun/tools/javac/code/Attribute$Enum;)V", nullptr, $PUBLIC},
	{"visitError", "(Lcom/sun/tools/javac/code/Attribute$Error;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ClassWriter$AttributeWriter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.jvm.ClassWriter$AttributeWriter", "com.sun.tools.javac.jvm.ClassWriter", "AttributeWriter", 0},
	{"com.sun.tools.javac.code.Attribute$Visitor", "com.sun.tools.javac.code.Attribute", "Visitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ClassWriter$AttributeWriter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.tools.javac.jvm.ClassWriter$AttributeWriter",
	"java.lang.Object",
	"com.sun.tools.javac.code.Attribute$Visitor",
	_ClassWriter$AttributeWriter_FieldInfo_,
	_ClassWriter$AttributeWriter_MethodInfo_,
	nullptr,
	nullptr,
	_ClassWriter$AttributeWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.tools.javac.jvm.ClassWriter"
};

$Object* allocate$ClassWriter$AttributeWriter($Class* clazz) {
	return $of($alloc(ClassWriter$AttributeWriter));
}

void ClassWriter$AttributeWriter::init$($ClassWriter* this$0) {
	$set(this, this$0, this$0);
}

void ClassWriter$AttributeWriter::visitConstant($Attribute$Constant* _value) {
	$useLocalCurrentObjectStackCache();
	$init($TypeTag);
	if ($nc($nc(_value)->type)->getTag() == $TypeTag::CLASS) {
		$Assert::check($instanceOf($String, _value->value));
		$var($String, s, $cast($String, _value->value));
		$nc(this->this$0->databuf)->appendByte(u's');
		$nc(this->this$0->databuf)->appendChar($nc(this->this$0->poolWriter)->putName($($nc(this->this$0->names)->fromString(s))));
	} else {
		$init($ClassWriter$1);
		switch ($nc($ClassWriter$1::$SwitchMap$com$sun$tools$javac$code$TypeTag)->get($nc(($($nc(_value->type)->getTag())))->ordinal())) {
		case 1:
			{
				$nc(this->this$0->databuf)->appendByte(u'B');
				break;
			}
		case 2:
			{
				$nc(this->this$0->databuf)->appendByte(u'C');
				break;
			}
		case 3:
			{
				$nc(this->this$0->databuf)->appendByte(u'S');
				break;
			}
		case 4:
			{
				$nc(this->this$0->databuf)->appendByte(u'I');
				break;
			}
		case 5:
			{
				$nc(this->this$0->databuf)->appendByte(u'J');
				break;
			}
		case 6:
			{
				$nc(this->this$0->databuf)->appendByte(u'F');
				break;
			}
		case 7:
			{
				$nc(this->this$0->databuf)->appendByte(u'D');
				break;
			}
		case 8:
			{
				$nc(this->this$0->databuf)->appendByte(u'Z');
				break;
			}
		default:
			{
				$throwNew($AssertionError, $of(_value->type));
			}
		}
		$nc(this->this$0->databuf)->appendChar($nc(this->this$0->poolWriter)->putConstant(_value->value));
	}
}

void ClassWriter$AttributeWriter::visitEnum($Attribute$Enum* e) {
	$nc(this->this$0->databuf)->appendByte(u'e');
	$nc(this->this$0->databuf)->appendChar($nc(this->this$0->poolWriter)->putDescriptor($nc($nc(e)->value)->type));
	$nc(this->this$0->databuf)->appendChar($nc(this->this$0->poolWriter)->putName($nc($nc(e)->value)->name));
}

void ClassWriter$AttributeWriter::visitClass($Attribute$Class* clazz) {
	$nc(this->this$0->databuf)->appendByte(u'c');
	$nc(this->this$0->databuf)->appendChar($nc(this->this$0->poolWriter)->putDescriptor($nc(clazz)->classType));
}

void ClassWriter$AttributeWriter::visitCompound($Attribute$Compound* compound) {
	$nc(this->this$0->databuf)->appendByte(u'@');
	this->this$0->writeCompoundAttribute(compound);
}

void ClassWriter$AttributeWriter::visitError($Attribute$Error* x) {
	$throwNew($AssertionError, $of(x));
}

void ClassWriter$AttributeWriter::visitArray($Attribute$Array* array) {
	$useLocalCurrentObjectStackCache();
	$nc(this->this$0->databuf)->appendByte(u'[');
	$nc(this->this$0->databuf)->appendChar($nc($nc(array)->values)->length);
	{
		$var($AttributeArray, arr$, $nc(array)->values);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Attribute, a, arr$->get(i$));
			{
				$nc(a)->accept(this);
			}
		}
	}
}

ClassWriter$AttributeWriter::ClassWriter$AttributeWriter() {
}

$Class* ClassWriter$AttributeWriter::load$($String* name, bool initialize) {
	$loadClass(ClassWriter$AttributeWriter, name, initialize, &_ClassWriter$AttributeWriter_ClassInfo_, allocate$ClassWriter$AttributeWriter);
	return class$;
}

$Class* ClassWriter$AttributeWriter::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com