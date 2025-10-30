#include <com/sun/tools/javac/code/TypeAnnotationPosition.h>

#include <com/sun/tools/javac/code/TargetType.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition$1.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry.h>
#include <com/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntryKind.h>
#include <com/sun/tools/javac/tree/JCTree$JCLambda.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef CAST
#undef CLASS_EXTENDS
#undef CLASS_TYPE_PARAMETER
#undef CLASS_TYPE_PARAMETER_BOUND
#undef CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT
#undef CONSTRUCTOR_REFERENCE
#undef CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT
#undef EXCEPTION_PARAMETER
#undef FIELD
#undef INSTANCEOF
#undef LOCAL_VARIABLE
#undef METHOD_FORMAL_PARAMETER
#undef METHOD_INVOCATION_TYPE_ARGUMENT
#undef METHOD_RECEIVER
#undef METHOD_REFERENCE
#undef METHOD_REFERENCE_TYPE_ARGUMENT
#undef METHOD_RETURN
#undef METHOD_TYPE_PARAMETER
#undef METHOD_TYPE_PARAMETER_BOUND
#undef MIN_VALUE
#undef NEW
#undef RESOURCE_VARIABLE
#undef THROWS
#undef UNKNOWN

using $TargetType = ::com::sun::tools::javac::code::TargetType;
using $TypeAnnotationPosition$1 = ::com::sun::tools::javac::code::TypeAnnotationPosition$1;
using $TypeAnnotationPosition$TypePathEntry = ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntry;
using $TypeAnnotationPosition$TypePathEntryKind = ::com::sun::tools::javac::code::TypeAnnotationPosition$TypePathEntryKind;
using $JCTree$JCLambda = ::com::sun::tools::javac::tree::JCTree$JCLambda;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $1List = ::java::util::List;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace code {

$FieldInfo _TypeAnnotationPosition_FieldInfo_[] = {
	{"emptyPath", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;", $PUBLIC | $STATIC | $FINAL, $staticField(TypeAnnotationPosition, emptyPath)},
	{"type", "Lcom/sun/tools/javac/code/TargetType;", nullptr, $PUBLIC | $FINAL, $field(TypeAnnotationPosition, type)},
	{"location", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;", $PUBLIC, $field(TypeAnnotationPosition, location)},
	{"pos", "I", nullptr, $PUBLIC | $FINAL, $field(TypeAnnotationPosition, pos)},
	{"isValidOffset", "Z", nullptr, $PUBLIC, $field(TypeAnnotationPosition, isValidOffset)},
	{"offset", "I", nullptr, $PUBLIC, $field(TypeAnnotationPosition, offset)},
	{"lvarOffset", "[I", nullptr, $PUBLIC, $field(TypeAnnotationPosition, lvarOffset)},
	{"lvarLength", "[I", nullptr, $PUBLIC, $field(TypeAnnotationPosition, lvarLength)},
	{"lvarIndex", "[I", nullptr, $PUBLIC, $field(TypeAnnotationPosition, lvarIndex)},
	{"bound_index", "I", nullptr, $PUBLIC | $FINAL, $field(TypeAnnotationPosition, bound_index)},
	{"parameter_index", "I", nullptr, $PUBLIC, $field(TypeAnnotationPosition, parameter_index)},
	{"type_index", "I", nullptr, $PUBLIC | $FINAL, $field(TypeAnnotationPosition, type_index)},
	{"exception_index", "I", nullptr, $PRIVATE, $field(TypeAnnotationPosition, exception_index)},
	{"exceptionStartPos", "I", nullptr, $PRIVATE, $field(TypeAnnotationPosition, exceptionStartPos)},
	{"onLambda", "Lcom/sun/tools/javac/tree/JCTree$JCLambda;", nullptr, $PUBLIC | $FINAL, $field(TypeAnnotationPosition, onLambda)},
	{"unknown", "Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(TypeAnnotationPosition, unknown)},
	{}
};

$MethodInfo _TypeAnnotationPosition_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/code/TargetType;IILcom/sun/tools/javac/tree/JCTree$JCLambda;IILcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/code/TargetType;IILcom/sun/tools/javac/tree/JCTree$JCLambda;IILcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)V", $PRIVATE, $method(static_cast<void(TypeAnnotationPosition::*)($TargetType*,int32_t,int32_t,$JCTree$JCLambda*,int32_t,int32_t,$List*)>(&TypeAnnotationPosition::init$))},
	{"classExtends", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::classExtends))},
	{"classExtends", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::classExtends))},
	{"classExtends", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t)>(&TypeAnnotationPosition::classExtends))},
	{"classExtends", "(II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)(int32_t,int32_t)>(&TypeAnnotationPosition::classExtends))},
	{"classExtends", "(I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)(int32_t)>(&TypeAnnotationPosition::classExtends))},
	{"constructorInvocationTypeArg", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::constructorInvocationTypeArg))},
	{"constructorInvocationTypeArg", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t)>(&TypeAnnotationPosition::constructorInvocationTypeArg))},
	{"constructorRef", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::constructorRef))},
	{"constructorRef", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*)>(&TypeAnnotationPosition::constructorRef))},
	{"constructorRefTypeArg", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::constructorRefTypeArg))},
	{"constructorRefTypeArg", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t)>(&TypeAnnotationPosition::constructorRefTypeArg))},
	{"emitToClassfile", "()Z", nullptr, $PUBLIC},
	{"exceptionParameter", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::exceptionParameter))},
	{"exceptionParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::exceptionParameter))},
	{"exceptionParameter", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*)>(&TypeAnnotationPosition::exceptionParameter))},
	{"field", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::field))},
	{"field", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*)>(&TypeAnnotationPosition::field))},
	{"field", "(I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)(int32_t)>(&TypeAnnotationPosition::field))},
	{"getBinaryFromTypePath", "(Ljava/util/List;)Lcom/sun/tools/javac/util/List;", "(Ljava/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/util/List<Ljava/lang/Integer;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($1List*)>(&TypeAnnotationPosition::getBinaryFromTypePath))},
	{"getCatchType", "()I", nullptr, $PUBLIC},
	{"getExceptionIndex", "()I", nullptr, $PUBLIC},
	{"getStartPos", "()I", nullptr, $PUBLIC},
	{"getTypePathFromBinary", "(Ljava/util/List;)Lcom/sun/tools/javac/util/List;", "(Ljava/util/List<Ljava/lang/Integer;>;)Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($1List*)>(&TypeAnnotationPosition::getTypePathFromBinary))},
	{"hasCatchType", "()Z", nullptr, $PUBLIC},
	{"hasExceptionIndex", "()Z", nullptr, $PUBLIC},
	{"instanceOf", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::instanceOf))},
	{"instanceOf", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*)>(&TypeAnnotationPosition::instanceOf))},
	{"localVariable", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::localVariable))},
	{"localVariable", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::localVariable))},
	{"localVariable", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*)>(&TypeAnnotationPosition::localVariable))},
	{"matchesPos", "(I)Z", nullptr, $PUBLIC},
	{"methodInvocationTypeArg", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::methodInvocationTypeArg))},
	{"methodInvocationTypeArg", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t)>(&TypeAnnotationPosition::methodInvocationTypeArg))},
	{"methodParameter", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::methodParameter))},
	{"methodParameter", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::methodParameter))},
	{"methodParameter", "(II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)(int32_t,int32_t)>(&TypeAnnotationPosition::methodParameter))},
	{"methodParameter", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t)>(&TypeAnnotationPosition::methodParameter))},
	{"methodReceiver", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::methodReceiver))},
	{"methodReceiver", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*)>(&TypeAnnotationPosition::methodReceiver))},
	{"methodReceiver", "(I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)(int32_t)>(&TypeAnnotationPosition::methodReceiver))},
	{"methodRef", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::methodRef))},
	{"methodRef", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*)>(&TypeAnnotationPosition::methodRef))},
	{"methodRefTypeArg", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::methodRefTypeArg))},
	{"methodRefTypeArg", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t)>(&TypeAnnotationPosition::methodRefTypeArg))},
	{"methodReturn", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::methodReturn))},
	{"methodReturn", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*)>(&TypeAnnotationPosition::methodReturn))},
	{"methodReturn", "(I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)(int32_t)>(&TypeAnnotationPosition::methodReturn))},
	{"methodThrows", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::methodThrows))},
	{"methodThrows", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t)>(&TypeAnnotationPosition::methodThrows))},
	{"methodTypeParameter", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::methodTypeParameter))},
	{"methodTypeParameter", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t)>(&TypeAnnotationPosition::methodTypeParameter))},
	{"methodTypeParameterBound", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;III)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;III)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t,int32_t)>(&TypeAnnotationPosition::methodTypeParameterBound))},
	{"methodTypeParameterBound", "(Lcom/sun/tools/javac/util/List;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t,int32_t)>(&TypeAnnotationPosition::methodTypeParameterBound))},
	{"newObj", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::newObj))},
	{"newObj", "(I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)(int32_t)>(&TypeAnnotationPosition::newObj))},
	{"newObj", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*)>(&TypeAnnotationPosition::newObj))},
	{"resourceVariable", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::resourceVariable))},
	{"resourceVariable", "(Lcom/sun/tools/javac/tree/JCTree$JCLambda;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($JCTree$JCLambda*,int32_t)>(&TypeAnnotationPosition::resourceVariable))},
	{"resourceVariable", "(Lcom/sun/tools/javac/util/List;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*)>(&TypeAnnotationPosition::resourceVariable))},
	{"setCatchInfo", "(II)V", nullptr, $PUBLIC},
	{"setExceptionIndex", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"typeCast", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::typeCast))},
	{"typeCast", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t)>(&TypeAnnotationPosition::typeCast))},
	{"typeParameter", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t)>(&TypeAnnotationPosition::typeParameter))},
	{"typeParameter", "(Lcom/sun/tools/javac/util/List;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;I)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t)>(&TypeAnnotationPosition::typeParameter))},
	{"typeParameterBound", "(Lcom/sun/tools/javac/util/List;Lcom/sun/tools/javac/tree/JCTree$JCLambda;III)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;Lcom/sun/tools/javac/tree/JCTree$JCLambda;III)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,$JCTree$JCLambda*,int32_t,int32_t,int32_t)>(&TypeAnnotationPosition::typeParameterBound))},
	{"typeParameterBound", "(Lcom/sun/tools/javac/util/List;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", "(Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/TypeAnnotationPosition$TypePathEntry;>;II)Lcom/sun/tools/javac/code/TypeAnnotationPosition;", $PUBLIC | $STATIC, $method(static_cast<TypeAnnotationPosition*(*)($List*,int32_t,int32_t)>(&TypeAnnotationPosition::typeParameterBound))},
	{"updatePosOffset", "(I)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TypeAnnotationPosition_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.code.TypeAnnotationPosition$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.code.TypeAnnotationPosition$TypePathEntry", "com.sun.tools.javac.code.TypeAnnotationPosition", "TypePathEntry", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.code.TypeAnnotationPosition$TypePathEntryKind", "com.sun.tools.javac.code.TypeAnnotationPosition", "TypePathEntryKind", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _TypeAnnotationPosition_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.tools.javac.code.TypeAnnotationPosition",
	"java.lang.Object",
	nullptr,
	_TypeAnnotationPosition_FieldInfo_,
	_TypeAnnotationPosition_MethodInfo_,
	nullptr,
	nullptr,
	_TypeAnnotationPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.code.TypeAnnotationPosition$1,com.sun.tools.javac.code.TypeAnnotationPosition$TypePathEntry,com.sun.tools.javac.code.TypeAnnotationPosition$TypePathEntryKind"
};

$Object* allocate$TypeAnnotationPosition($Class* clazz) {
	return $of($alloc(TypeAnnotationPosition));
}

$List* TypeAnnotationPosition::emptyPath = nullptr;
TypeAnnotationPosition* TypeAnnotationPosition::unknown = nullptr;

$String* TypeAnnotationPosition::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append(u'[');
	sb->append($of(this->type));
	$init($TypeAnnotationPosition$1);
	switch ($nc($TypeAnnotationPosition$1::$SwitchMap$com$sun$tools$javac$code$TargetType)->get((this->type)->ordinal())) {
	case 1:
		{}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{
			sb->append(", offset = "_s);
			sb->append(this->offset);
			break;
		}
	case 5:
		{}
	case 6:
		{
			if (this->lvarOffset == nullptr) {
				sb->append(", lvarOffset is null!"_s);
				break;
			}
			sb->append(", {"_s);
			for (int32_t i = 0; i < $nc(this->lvarOffset)->length; ++i) {
				if (i != 0) {
					sb->append("; "_s);
				}
				sb->append("start_pc = "_s);
				sb->append($nc(this->lvarOffset)->get(i));
				sb->append(", length = "_s);
				sb->append($nc(this->lvarLength)->get(i));
				sb->append(", index = "_s);
				sb->append($nc(this->lvarIndex)->get(i));
			}
			sb->append("}"_s);
			break;
		}
	case 7:
		{
			break;
		}
	case 8:
		{}
	case 9:
		{
			sb->append(", param_index = "_s);
			sb->append(this->parameter_index);
			break;
		}
	case 10:
		{}
	case 11:
		{
			sb->append(", param_index = "_s);
			sb->append(this->parameter_index);
			sb->append(", bound_index = "_s);
			sb->append(this->bound_index);
			break;
		}
	case 12:
		{
			sb->append(", type_index = "_s);
			sb->append(this->type_index);
			break;
		}
	case 13:
		{
			sb->append(", type_index = "_s);
			sb->append(this->type_index);
			break;
		}
	case 14:
		{
			sb->append(", exception_index = "_s);
			sb->append(this->exception_index);
			break;
		}
	case 15:
		{
			sb->append(", param_index = "_s);
			sb->append(this->parameter_index);
			break;
		}
	case 16:
		{}
	case 17:
		{}
	case 18:
		{}
	case 19:
		{}
	case 20:
		{
			sb->append(", offset = "_s);
			sb->append(this->offset);
			sb->append(", type_index = "_s);
			sb->append(this->type_index);
			break;
		}
	case 21:
		{}
	case 22:
		{
			break;
		}
	case 23:
		{
			sb->append(", position UNKNOWN!"_s);
			break;
		}
	default:
		{
			$Assert::error($$str({"Unknown target type: "_s, this->type}));
		}
	}
	if (!$nc(this->location)->isEmpty()) {
		sb->append(", location = ("_s);
		sb->append($of(this->location));
		sb->append(")"_s);
	}
	sb->append(", pos = "_s);
	sb->append(this->pos);
	if (this->onLambda != nullptr) {
		sb->append(", onLambda hash = "_s);
		sb->append($nc($of(this->onLambda))->hashCode());
	}
	sb->append(u']');
	return sb->toString();
}

bool TypeAnnotationPosition::emitToClassfile() {
	return !this->type->isLocal() || this->isValidOffset;
}

bool TypeAnnotationPosition::matchesPos(int32_t pos) {
	return this->pos == pos;
}

void TypeAnnotationPosition::updatePosOffset(int32_t to) {
	this->offset = to;
	$set(this, lvarOffset, $new($ints, {to}));
	this->isValidOffset = true;
}

bool TypeAnnotationPosition::hasExceptionIndex() {
	return this->exception_index >= 0;
}

int32_t TypeAnnotationPosition::getExceptionIndex() {
	$Assert::check(this->exception_index >= 0, "exception_index is not set"_s);
	return this->exception_index;
}

void TypeAnnotationPosition::setExceptionIndex(int32_t exception_index) {
	$Assert::check(!hasExceptionIndex(), "exception_index already set"_s);
	$Assert::check(exception_index >= 0, "Expected a valid index into exception table"_s);
	this->exception_index = exception_index;
	this->isValidOffset = true;
}

bool TypeAnnotationPosition::hasCatchType() {
	return this->exception_index < 0 && this->exception_index != $Integer::MIN_VALUE;
}

int32_t TypeAnnotationPosition::getCatchType() {
	$Assert::check(hasCatchType(), "exception_index does not contain valid catch info"_s);
	return (-this->exception_index) - 1;
}

int32_t TypeAnnotationPosition::getStartPos() {
	$Assert::check(this->exceptionStartPos >= 0, "exceptionStartPos does not contain valid start position"_s);
	return this->exceptionStartPos;
}

void TypeAnnotationPosition::setCatchInfo(int32_t catchType, int32_t startPos) {
	$Assert::check(!hasExceptionIndex(), "exception_index is already set"_s);
	$Assert::check(catchType >= 0, "Expected a valid catch type"_s);
	$Assert::check(startPos >= 0, "Expected a valid start position"_s);
	this->exception_index = -(catchType + 1);
	this->exceptionStartPos = startPos;
}

$List* TypeAnnotationPosition::getTypePathFromBinary($1List* list) {
	$init(TypeAnnotationPosition);
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, loc, $new($ListBuffer));
	$var($Iterator, iter, $nc(list)->iterator());
	while ($nc(iter)->hasNext()) {
		$var($Integer, fst, $cast($Integer, iter->next()));
		$Assert::check(iter->hasNext());
		$var($Integer, snd, $cast($Integer, iter->next()));
		int32_t var$0 = $nc(fst)->intValue();
		$assign(loc, $nc(loc)->append($($TypeAnnotationPosition$TypePathEntry::fromBinary(var$0, $nc(snd)->intValue()))));
	}
	return $nc(loc)->toList();
}

$List* TypeAnnotationPosition::getBinaryFromTypePath($1List* locs) {
	$init(TypeAnnotationPosition);
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, loc, $new($ListBuffer));
	{
		$var($Iterator, i$, $nc(locs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($TypeAnnotationPosition$TypePathEntry, tpe, $cast($TypeAnnotationPosition$TypePathEntry, i$->next()));
			{
				$assign(loc, $nc(loc)->append($($Integer::valueOf($nc(tpe)->tag->tag))));
				$assign(loc, loc->append($($Integer::valueOf($nc(tpe)->arg))));
			}
		}
	}
	return $nc(loc)->toList();
}

void TypeAnnotationPosition::init$($TargetType* ttype, int32_t pos, int32_t parameter_index, $JCTree$JCLambda* onLambda, int32_t type_index, int32_t bound_index, $List* location) {
	this->isValidOffset = false;
	this->offset = -1;
	$set(this, lvarOffset, nullptr);
	$set(this, lvarLength, nullptr);
	$set(this, lvarIndex, nullptr);
	this->exception_index = $Integer::MIN_VALUE;
	this->exceptionStartPos = $Integer::MIN_VALUE;
	$Assert::checkNonNull(location);
	$set(this, type, ttype);
	this->pos = pos;
	this->parameter_index = parameter_index;
	$set(this, onLambda, onLambda);
	this->type_index = type_index;
	this->bound_index = bound_index;
	$set(this, location, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodReturn($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::METHOD_RETURN, pos, $Integer::MIN_VALUE, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodReturn($List* location) {
	$init(TypeAnnotationPosition);
	return methodReturn(location, nullptr, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodReturn(int32_t pos) {
	$init(TypeAnnotationPosition);
	return methodReturn(TypeAnnotationPosition::emptyPath, nullptr, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodReceiver($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::METHOD_RECEIVER, pos, $Integer::MIN_VALUE, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodReceiver($List* location) {
	$init(TypeAnnotationPosition);
	return methodReceiver(location, nullptr, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodReceiver(int32_t pos) {
	$init(TypeAnnotationPosition);
	return methodReceiver(TypeAnnotationPosition::emptyPath, nullptr, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodParameter($List* location, $JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::METHOD_FORMAL_PARAMETER, pos, parameter_index, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodParameter($JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	return methodParameter(TypeAnnotationPosition::emptyPath, onLambda, parameter_index, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodParameter(int32_t parameter_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	return methodParameter(nullptr, parameter_index, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodParameter($List* location, int32_t parameter_index) {
	$init(TypeAnnotationPosition);
	return methodParameter(location, nullptr, parameter_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodRef($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::METHOD_REFERENCE, pos, $Integer::MIN_VALUE, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodRef($List* location) {
	$init(TypeAnnotationPosition);
	return methodRef(location, nullptr, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::constructorRef($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::CONSTRUCTOR_REFERENCE, pos, $Integer::MIN_VALUE, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::constructorRef($List* location) {
	$init(TypeAnnotationPosition);
	return constructorRef(location, nullptr, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::field($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::FIELD, pos, $Integer::MIN_VALUE, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::field($List* location) {
	$init(TypeAnnotationPosition);
	return field(location, nullptr, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::field(int32_t pos) {
	$init(TypeAnnotationPosition);
	return field(TypeAnnotationPosition::emptyPath, nullptr, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::localVariable($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::LOCAL_VARIABLE, pos, $Integer::MIN_VALUE, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::localVariable($JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	return localVariable(TypeAnnotationPosition::emptyPath, onLambda, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::localVariable($List* location) {
	$init(TypeAnnotationPosition);
	return localVariable(location, nullptr, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::exceptionParameter($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::EXCEPTION_PARAMETER, pos, $Integer::MIN_VALUE, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::exceptionParameter($JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	return exceptionParameter(TypeAnnotationPosition::emptyPath, onLambda, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::exceptionParameter($List* location) {
	$init(TypeAnnotationPosition);
	return exceptionParameter(location, nullptr, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::resourceVariable($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::RESOURCE_VARIABLE, pos, $Integer::MIN_VALUE, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::resourceVariable($JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	return resourceVariable(TypeAnnotationPosition::emptyPath, onLambda, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::resourceVariable($List* location) {
	$init(TypeAnnotationPosition);
	return resourceVariable(location, nullptr, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::newObj($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::NEW, pos, $Integer::MIN_VALUE, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::newObj(int32_t pos) {
	$init(TypeAnnotationPosition);
	return newObj(TypeAnnotationPosition::emptyPath, nullptr, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::newObj($List* location) {
	$init(TypeAnnotationPosition);
	return newObj(location, nullptr, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::classExtends($List* location, $JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::CLASS_EXTENDS, pos, $Integer::MIN_VALUE, onLambda, type_index, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::classExtends($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	return classExtends(location, onLambda, 0x0000FFFF, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::classExtends($List* location, int32_t type_index) {
	$init(TypeAnnotationPosition);
	return classExtends(location, nullptr, type_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::classExtends(int32_t type_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	return classExtends(TypeAnnotationPosition::emptyPath, nullptr, type_index, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::classExtends(int32_t pos) {
	$init(TypeAnnotationPosition);
	return classExtends(0x0000FFFF, pos);
}

TypeAnnotationPosition* TypeAnnotationPosition::instanceOf($List* location, $JCTree$JCLambda* onLambda, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::INSTANCEOF, pos, $Integer::MIN_VALUE, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::instanceOf($List* location) {
	$init(TypeAnnotationPosition);
	return instanceOf(location, nullptr, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::typeCast($List* location, $JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::CAST, pos, $Integer::MIN_VALUE, onLambda, type_index, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::typeCast($List* location, int32_t type_index) {
	$init(TypeAnnotationPosition);
	return typeCast(location, nullptr, type_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodInvocationTypeArg($List* location, $JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::METHOD_INVOCATION_TYPE_ARGUMENT, pos, $Integer::MIN_VALUE, onLambda, type_index, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodInvocationTypeArg($List* location, int32_t type_index) {
	$init(TypeAnnotationPosition);
	return methodInvocationTypeArg(location, nullptr, type_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::constructorInvocationTypeArg($List* location, $JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::CONSTRUCTOR_INVOCATION_TYPE_ARGUMENT, pos, $Integer::MIN_VALUE, onLambda, type_index, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::constructorInvocationTypeArg($List* location, int32_t type_index) {
	$init(TypeAnnotationPosition);
	return constructorInvocationTypeArg(location, nullptr, type_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::typeParameter($List* location, $JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::CLASS_TYPE_PARAMETER, pos, parameter_index, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::typeParameter($List* location, int32_t parameter_index) {
	$init(TypeAnnotationPosition);
	return typeParameter(location, nullptr, parameter_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodTypeParameter($List* location, $JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::METHOD_TYPE_PARAMETER, pos, parameter_index, onLambda, $Integer::MIN_VALUE, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodTypeParameter($List* location, int32_t parameter_index) {
	$init(TypeAnnotationPosition);
	return methodTypeParameter(location, nullptr, parameter_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodThrows($List* location, $JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::THROWS, pos, $Integer::MIN_VALUE, onLambda, type_index, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodThrows($List* location, int32_t type_index) {
	$init(TypeAnnotationPosition);
	return methodThrows(location, nullptr, type_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodRefTypeArg($List* location, $JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::METHOD_REFERENCE_TYPE_ARGUMENT, pos, $Integer::MIN_VALUE, onLambda, type_index, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodRefTypeArg($List* location, int32_t type_index) {
	$init(TypeAnnotationPosition);
	return methodRefTypeArg(location, nullptr, type_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::constructorRefTypeArg($List* location, $JCTree$JCLambda* onLambda, int32_t type_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::CONSTRUCTOR_REFERENCE_TYPE_ARGUMENT, pos, $Integer::MIN_VALUE, onLambda, type_index, $Integer::MIN_VALUE, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::constructorRefTypeArg($List* location, int32_t type_index) {
	$init(TypeAnnotationPosition);
	return constructorRefTypeArg(location, nullptr, type_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::typeParameterBound($List* location, $JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t bound_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::CLASS_TYPE_PARAMETER_BOUND, pos, parameter_index, onLambda, $Integer::MIN_VALUE, bound_index, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::typeParameterBound($List* location, int32_t parameter_index, int32_t bound_index) {
	$init(TypeAnnotationPosition);
	return typeParameterBound(location, nullptr, parameter_index, bound_index, -1);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodTypeParameterBound($List* location, $JCTree$JCLambda* onLambda, int32_t parameter_index, int32_t bound_index, int32_t pos) {
	$init(TypeAnnotationPosition);
	$init($TargetType);
	return $new(TypeAnnotationPosition, $TargetType::METHOD_TYPE_PARAMETER_BOUND, pos, parameter_index, onLambda, $Integer::MIN_VALUE, bound_index, location);
}

TypeAnnotationPosition* TypeAnnotationPosition::methodTypeParameterBound($List* location, int32_t parameter_index, int32_t bound_index) {
	$init(TypeAnnotationPosition);
	return methodTypeParameterBound(location, nullptr, parameter_index, bound_index, -1);
}

void clinit$TypeAnnotationPosition($Class* class$) {
	$assignStatic(TypeAnnotationPosition::emptyPath, $List::nil());
	$init($TargetType);
	$assignStatic(TypeAnnotationPosition::unknown, $new(TypeAnnotationPosition, $TargetType::UNKNOWN, -1, $Integer::MIN_VALUE, nullptr, $Integer::MIN_VALUE, $Integer::MIN_VALUE, TypeAnnotationPosition::emptyPath));
}

TypeAnnotationPosition::TypeAnnotationPosition() {
}

$Class* TypeAnnotationPosition::load$($String* name, bool initialize) {
	$loadClass(TypeAnnotationPosition, name, initialize, &_TypeAnnotationPosition_ClassInfo_, clinit$TypeAnnotationPosition, allocate$TypeAnnotationPosition);
	return class$;
}

$Class* TypeAnnotationPosition::class$ = nullptr;

				} // code
			} // javac
		} // tools
	} // sun
} // com