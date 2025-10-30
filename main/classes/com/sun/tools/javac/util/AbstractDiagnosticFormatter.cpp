#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter.h>

#include <com/sun/source/tree/Tree$Kind.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$DiagnosticPart.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration$MultilineLimit.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$Configuration.h>
#include <com/sun/tools/javac/api/DiagnosticFormatter$PositionKind.h>
#include <com/sun/tools/javac/api/Formattable.h>
#include <com/sun/tools/javac/api/Messages.h>
#include <com/sun/tools/javac/code/Lint$LintCategory.h>
#include <com/sun/tools/javac/code/Printer.h>
#include <com/sun/tools/javac/code/Source.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/file/PathFileObject.h>
#include <com/sun/tools/javac/jvm/Profile.h>
#include <com/sun/tools/javac/jvm/Target.h>
#include <com/sun/tools/javac/main/Option.h>
#include <com/sun/tools/javac/tree/JCTree$JCCaseLabel.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree$JCParens.h>
#include <com/sun/tools/javac/tree/JCTree$Tag.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/tree/Pretty.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$1.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$2.h>
#include <com/sun/tools/javac/util/AbstractDiagnosticFormatter$SimpleConfiguration.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticType.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/JavacMessages.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/ListBuffer.h>
#include <com/sun/tools/javac/util/Position.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Iterable.h>
#include <java/nio/file/Path.h>
#include <java/util/AbstractCollection.h>
#include <java/util/Collection.h>
#include <java/util/EnumSet.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Set.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/JavaFileObject.h>
#include <jcpp.h>

#undef DEPTH
#undef FRAGMENT
#undef LENGTH
#undef NOPOS
#undef SOURCE

using $Tree = ::com::sun::source::tree::Tree;
using $Tree$Kind = ::com::sun::source::tree::Tree$Kind;
using $DiagnosticFormatter = ::com::sun::tools::javac::api::DiagnosticFormatter;
using $DiagnosticFormatter$Configuration = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration;
using $DiagnosticFormatter$Configuration$DiagnosticPart = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$DiagnosticPart;
using $DiagnosticFormatter$Configuration$MultilineLimit = ::com::sun::tools::javac::api::DiagnosticFormatter$Configuration$MultilineLimit;
using $DiagnosticFormatter$PositionKind = ::com::sun::tools::javac::api::DiagnosticFormatter$PositionKind;
using $Formattable = ::com::sun::tools::javac::api::Formattable;
using $Messages = ::com::sun::tools::javac::api::Messages;
using $Lint$LintCategory = ::com::sun::tools::javac::code::Lint$LintCategory;
using $Printer = ::com::sun::tools::javac::code::Printer;
using $Source = ::com::sun::tools::javac::code::Source;
using $Symbol = ::com::sun::tools::javac::code::Symbol;
using $Type = ::com::sun::tools::javac::code::Type;
using $PathFileObject = ::com::sun::tools::javac::file::PathFileObject;
using $Profile = ::com::sun::tools::javac::jvm::Profile;
using $Target = ::com::sun::tools::javac::jvm::Target;
using $Option = ::com::sun::tools::javac::main::Option;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCCaseLabel = ::com::sun::tools::javac::tree::JCTree$JCCaseLabel;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $JCTree$JCParens = ::com::sun::tools::javac::tree::JCTree$JCParens;
using $JCTree$Tag = ::com::sun::tools::javac::tree::JCTree$Tag;
using $Pretty = ::com::sun::tools::javac::tree::Pretty;
using $AbstractDiagnosticFormatter$1 = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter$1;
using $AbstractDiagnosticFormatter$2 = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter$2;
using $AbstractDiagnosticFormatter$SimpleConfiguration = ::com::sun::tools::javac::util::AbstractDiagnosticFormatter$SimpleConfiguration;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticType = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticType;
using $JavacMessages = ::com::sun::tools::javac::util::JavacMessages;
using $List = ::com::sun::tools::javac::util::List;
using $ListBuffer = ::com::sun::tools::javac::util::ListBuffer;
using $Position = ::com::sun::tools::javac::util::Position;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Path = ::java::nio::file::Path;
using $AbstractCollection = ::java::util::AbstractCollection;
using $Collection = ::java::util::Collection;
using $EnumSet = ::java::util::EnumSet;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Diagnostic = ::javax::tools::Diagnostic;
using $FileObject = ::javax::tools::FileObject;
using $JavaFileObject = ::javax::tools::JavaFileObject;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

$FieldInfo _AbstractDiagnosticFormatter_FieldInfo_[] = {
	{"messages", "Lcom/sun/tools/javac/util/JavacMessages;", nullptr, $PROTECTED, $field(AbstractDiagnosticFormatter, messages)},
	{"config", "Lcom/sun/tools/javac/util/AbstractDiagnosticFormatter$SimpleConfiguration;", nullptr, $PRIVATE, $field(AbstractDiagnosticFormatter, config)},
	{"depth", "I", nullptr, $PROTECTED, $field(AbstractDiagnosticFormatter, depth)},
	{"allCaptured", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;", $PRIVATE, $field(AbstractDiagnosticFormatter, allCaptured)},
	{"printer", "Lcom/sun/tools/javac/code/Printer;", nullptr, $PROTECTED, $field(AbstractDiagnosticFormatter, printer)},
	{}
};

$MethodInfo _AbstractDiagnosticFormatter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/tools/javac/util/JavacMessages;Lcom/sun/tools/javac/util/AbstractDiagnosticFormatter$SimpleConfiguration;)V", nullptr, $PROTECTED, $method(static_cast<void(AbstractDiagnosticFormatter::*)($JavacMessages*,$AbstractDiagnosticFormatter$SimpleConfiguration*)>(&AbstractDiagnosticFormatter::init$))},
	{"displaySource", "(Lcom/sun/tools/javac/util/JCDiagnostic;)Z", nullptr, $PUBLIC},
	{"displaySource", "(Ljavax/tools/Diagnostic;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"expr2String", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(AbstractDiagnosticFormatter::*)($JCTree$JCExpression*)>(&AbstractDiagnosticFormatter::expr2String))},
	{"format", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"format", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"formatArgument", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"formatArguments", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/util/Collection;", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/util/Collection<Ljava/lang/String;>;", $PROTECTED},
	{"formatDiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"formatIterable", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/Iterable;Ljava/util/Locale;)Ljava/lang/String;", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/lang/Iterable<*>;Ljava/util/Locale;)Ljava/lang/String;", $PROTECTED},
	{"formatKind", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"formatKind", "(Ljavax/tools/Diagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"formatLintCategory", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"formatPosition", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"formatPosition", "(Ljavax/tools/Diagnostic;Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"formatSource", "(Lcom/sun/tools/javac/util/JCDiagnostic;ZLjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"formatSource", "(Ljavax/tools/Diagnostic;ZLjava/util/Locale;)Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"formatSourceLine", "(Lcom/sun/tools/javac/util/JCDiagnostic;I)Ljava/lang/String;", nullptr, $PROTECTED},
	{"formatSubdiagnostic", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"formatSubdiagnostics", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Lcom/sun/tools/javac/util/List;", "(Lcom/sun/tools/javac/util/JCDiagnostic;Ljava/util/Locale;)Lcom/sun/tools/javac/util/List<Ljava/lang/String;>;", $PROTECTED},
	{"getConfiguration", "()Lcom/sun/tools/javac/util/AbstractDiagnosticFormatter$SimpleConfiguration;", nullptr, $PUBLIC},
	{"getPosition", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/api/DiagnosticFormatter$PositionKind;)J", nullptr, $PRIVATE, $method(static_cast<int64_t(AbstractDiagnosticFormatter::*)($JCDiagnostic*,$DiagnosticFormatter$PositionKind*)>(&AbstractDiagnosticFormatter::getPosition))},
	{"getPrinter", "()Lcom/sun/tools/javac/code/Printer;", nullptr, $PUBLIC},
	{"indent", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PROTECTED},
	{"indentString", "(I)Ljava/lang/String;", nullptr, $PROTECTED},
	{"isRaw", "()Z", nullptr, $PUBLIC},
	{"localize", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PROTECTED | $TRANSIENT},
	{"setPrinter", "(Lcom/sun/tools/javac/code/Printer;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AbstractDiagnosticFormatter_InnerClassesInfo_[] = {
	{"com.sun.tools.javac.util.AbstractDiagnosticFormatter$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"com.sun.tools.javac.util.AbstractDiagnosticFormatter$SimpleConfiguration", "com.sun.tools.javac.util.AbstractDiagnosticFormatter", "SimpleConfiguration", $PUBLIC | $STATIC},
	{"com.sun.tools.javac.util.AbstractDiagnosticFormatter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractDiagnosticFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter",
	"java.lang.Object",
	"com.sun.tools.javac.api.DiagnosticFormatter",
	_AbstractDiagnosticFormatter_FieldInfo_,
	_AbstractDiagnosticFormatter_MethodInfo_,
	"Ljava/lang/Object;Lcom/sun/tools/javac/api/DiagnosticFormatter<Lcom/sun/tools/javac/util/JCDiagnostic;>;",
	nullptr,
	_AbstractDiagnosticFormatter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.tools.javac.util.AbstractDiagnosticFormatter$2,com.sun.tools.javac.util.AbstractDiagnosticFormatter$SimpleConfiguration,com.sun.tools.javac.util.AbstractDiagnosticFormatter$1"
};

$Object* allocate$AbstractDiagnosticFormatter($Class* clazz) {
	return $of($alloc(AbstractDiagnosticFormatter));
}

void AbstractDiagnosticFormatter::init$($JavacMessages* messages, $AbstractDiagnosticFormatter$SimpleConfiguration* config) {
	this->depth = 0;
	$set(this, allCaptured, $List::nil());
	$set(this, printer, $new($AbstractDiagnosticFormatter$1, this));
	$set(this, messages, messages);
	$set(this, config, config);
}

$String* AbstractDiagnosticFormatter::formatKind($JCDiagnostic* d, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$init($AbstractDiagnosticFormatter$2);
	switch ($nc($AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$util$JCDiagnostic$DiagnosticType)->get($nc(($($nc(d)->getType())))->ordinal())) {
	case 1:
		{
			return ""_s;
		}
	case 2:
		{
			return localize(l, "compiler.note.note"_s, $$new($ObjectArray, 0));
		}
	case 3:
		{
			return localize(l, "compiler.warn.warning"_s, $$new($ObjectArray, 0));
		}
	case 4:
		{
			return localize(l, "compiler.err.error"_s, $$new($ObjectArray, 0));
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unknown diagnostic type: "_s, $(d->getType())})));
		}
	}
}

$String* AbstractDiagnosticFormatter::format($JCDiagnostic* d, $Locale* locale) {
	$set(this, allCaptured, $List::nil());
	return formatDiagnostic(d, locale);
}

$String* AbstractDiagnosticFormatter::formatPosition($JCDiagnostic* d, $DiagnosticFormatter$PositionKind* pk, $Locale* l) {
	$Assert::check($nc(d)->getPosition() != $Position::NOPOS);
	return $String::valueOf(getPosition(d, pk));
}

int64_t AbstractDiagnosticFormatter::getPosition($JCDiagnostic* d, $DiagnosticFormatter$PositionKind* pk) {
	$init($AbstractDiagnosticFormatter$2);
	switch ($nc($AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$api$DiagnosticFormatter$PositionKind)->get($nc((pk))->ordinal())) {
	case 1:
		{
			return $nc(d)->getIntStartPosition();
		}
	case 2:
		{
			return $nc(d)->getIntEndPosition();
		}
	case 3:
		{
			return $nc(d)->getLineNumber();
		}
	case 4:
		{
			return $nc(d)->getColumnNumber();
		}
	case 5:
		{
			return $nc(d)->getIntPosition();
		}
	default:
		{
			$throwNew($AssertionError, $of($$str({"Unknown diagnostic position: "_s, pk})));
		}
	}
}

$String* AbstractDiagnosticFormatter::formatSource($JCDiagnostic* d, bool fullname, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$var($JavaFileObject, fo, $cast($JavaFileObject, $nc(d)->getSource()));
	if (fo == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	{
		$var($PathFileObject, pathFileObject, nullptr);
		if (fullname) {
			return $nc(fo)->getName();
		} else {
			bool var$1 = $instanceOf($PathFileObject, fo);
			if (var$1) {
				$assign(pathFileObject, $cast($PathFileObject, fo));
				var$1 = true;
			}
			if (var$1) {
				return $nc(pathFileObject)->getShortName();
			} else {
				return $PathFileObject::getSimpleName(fo);
			}
		}
	}
}

$Collection* AbstractDiagnosticFormatter::formatArguments($JCDiagnostic* d, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$var($ListBuffer, buf, $new($ListBuffer));
	{
		$var($ObjectArray, arr$, $nc(d)->getArgs());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, o, arr$->get(i$));
			{
				buf->append($(formatArgument(d, o, l)));
			}
		}
	}
	return static_cast<$Collection*>(static_cast<$AbstractCollection*>(buf->toList()));
}

$String* AbstractDiagnosticFormatter::formatArgument($JCDiagnostic* d, Object$* arg, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	{
		$var($JCDiagnostic, diagnostic, nullptr);
		$var($JCTree$JCExpression, expression, nullptr);
		$var($Iterable, iterable, nullptr);
		$var($Type, type, nullptr);
		$var($Symbol, symbol, nullptr);
		$var($JavaFileObject, javaFileObject, nullptr);
		$Profile* profile = nullptr;
		$Option* option = nullptr;
		$var($Formattable, formattable, nullptr);
		$Target* target = nullptr;
		$Source* source = nullptr;
		$JCTree$Tag* tag = nullptr;
		bool var$0 = $instanceOf($JCDiagnostic, arg);
		if (var$0) {
			$assign(diagnostic, $cast($JCDiagnostic, arg));
			var$0 = true;
		}
		if (var$0) {
			$var($String, s, nullptr);
			++this->depth;
			{
				$var($Throwable, var$1, nullptr);
				try {
					$assign(s, formatMessage(diagnostic, l));
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					--this->depth;
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
			return s;
		} else {
			bool var$4 = $instanceOf($JCTree$JCExpression, arg);
			if (var$4) {
				$assign(expression, $cast($JCTree$JCExpression, arg));
				var$4 = true;
			}
			if (var$4) {
				return expr2String(expression);
			} else {
				bool var$6 = $instanceOf($Iterable, arg);
				if (var$6) {
					$assign(iterable, $cast($Iterable, arg));
					var$6 = true;
				}
				if (var$6 && !($instanceOf($Path, arg))) {
					return formatIterable(d, iterable, l);
				} else {
					bool var$8 = $instanceOf($Type, arg);
					if (var$8) {
						$assign(type, $cast($Type, arg));
						var$8 = true;
					}
					if (var$8) {
						return $nc(this->printer)->visit(type, l);
					} else {
						bool var$10 = $instanceOf($Symbol, arg);
						if (var$10) {
							$assign(symbol, $cast($Symbol, arg));
							var$10 = true;
						}
						if (var$10) {
							return $nc(this->printer)->visit(symbol, l);
						} else {
							bool var$12 = $instanceOf($JavaFileObject, arg);
							if (var$12) {
								$assign(javaFileObject, $cast($JavaFileObject, arg));
								var$12 = true;
							}
							if (var$12) {
								return $nc(javaFileObject)->getName();
							} else {
								bool var$14 = $instanceOf($Profile, arg);
								if (var$14) {
									profile = $cast($Profile, arg);
									var$14 = true;
								}
								if (var$14) {
									return $nc(profile)->name$;
								} else {
									bool var$16 = $instanceOf($Option, arg);
									if (var$16) {
										option = $cast($Option, arg);
										var$16 = true;
									}
									if (var$16) {
										return $nc(option)->primaryName;
									} else {
										bool var$18 = $instanceOf($Formattable, arg);
										if (var$18) {
											$assign(formattable, $cast($Formattable, arg));
											var$18 = true;
										}
										if (var$18) {
											return $nc(formattable)->toString(l, this->messages);
										} else {
											bool var$20 = $instanceOf($Target, arg);
											if (var$20) {
												target = $cast($Target, arg);
												var$20 = true;
											}
											if (var$20) {
												return $nc(target)->name$;
											} else {
												bool var$22 = $instanceOf($Source, arg);
												if (var$22) {
													source = $cast($Source, arg);
													var$22 = true;
												}
												if (var$22) {
													return $nc(source)->name$;
												} else {
													bool var$24 = $instanceOf($JCTree$Tag, arg);
													if (var$24) {
														tag = $cast($JCTree$Tag, arg);
														var$24 = true;
													}
													if (var$24) {
														return $nc(this->messages)->getLocalizedString(l, $$str({"compiler.misc.tree.tag."_s, $($StringUtils::toLowerCase($($nc(tag)->name())))}), $$new($ObjectArray, 0));
													} else {
														return $String::valueOf(arg);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

$String* AbstractDiagnosticFormatter::expr2String($JCTree$JCExpression* tree) {
	$useLocalCurrentObjectStackCache();
	$init($AbstractDiagnosticFormatter$2);
	switch ($nc($AbstractDiagnosticFormatter$2::$SwitchMap$com$sun$tools$javac$tree$JCTree$Tag)->get($nc(($($nc(tree)->getTag())))->ordinal())) {
	case 1:
		{
			return expr2String($nc(($cast($JCTree$JCParens, tree)))->expr);
		}
	case 2:
		{}
	case 3:
		{}
	case 4:
		{
			return $Pretty::toSimpleString(tree);
		}
	default:
		{
			$Assert::error($$str({"unexpected tree kind "_s, $(tree->getKind())}));
			return nullptr;
		}
	}
}

$String* AbstractDiagnosticFormatter::formatIterable($JCDiagnostic* d, $Iterable* it, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sbuf, $new($StringBuilder));
	$var($String, sep, ""_s);
	{
		$var($Iterator, i$, $nc(it)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, o, i$->next());
			{
				sbuf->append(sep);
				sbuf->append($(formatArgument(d, o, l)));
				$assign(sep, ","_s);
			}
		}
	}
	return sbuf->toString();
}

$List* AbstractDiagnosticFormatter::formatSubdiagnostics($JCDiagnostic* d, $Locale* l) {
	$useLocalCurrentObjectStackCache();
	$var($List, subdiagnostics, $List::nil());
	$init($DiagnosticFormatter$Configuration$MultilineLimit);
	int32_t maxDepth = $nc(this->config)->getMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit::DEPTH);
	if (maxDepth == -1 || this->depth < maxDepth) {
		++this->depth;
		{
			$var($Throwable, var$0, nullptr);
			try {
				int32_t maxCount = $nc(this->config)->getMultilineLimit($DiagnosticFormatter$Configuration$MultilineLimit::LENGTH);
				int32_t count = 0;
				{
					$var($Iterator, i$, $nc($($nc(d)->getSubdiagnostics()))->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($JCDiagnostic, d2, $cast($JCDiagnostic, i$->next()));
						{
							if (maxCount == -1 || count < maxCount) {
								$assign(subdiagnostics, $nc(subdiagnostics)->append($(formatSubdiagnostic(d, d2, l))));
								++count;
							} else {
								break;
							}
						}
					}
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				--this->depth;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return subdiagnostics;
}

$String* AbstractDiagnosticFormatter::formatSubdiagnostic($JCDiagnostic* parent, $JCDiagnostic* sub, $Locale* l) {
	return formatMessage(sub, l);
}

$String* AbstractDiagnosticFormatter::formatSourceLine($JCDiagnostic* d, int32_t nSpaces) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($DiagnosticSource, source, $nc(d)->getDiagnosticSource());
	int32_t pos = d->getIntPosition();
	if (d->getIntPosition() == $Position::NOPOS) {
		$throwNew($AssertionError);
	}
	$var($String, line, source == nullptr ? ($String*)nullptr : $nc(source)->getLine(pos));
	if (line == nullptr) {
		return ""_s;
	}
	buf->append($(indent(line, nSpaces)));
	int32_t col = source->getColumnNumber(pos, false);
	if ($nc(this->config)->isCaretEnabled()) {
		buf->append("\n"_s);
		for (int32_t i = 0; i < col - 1; ++i) {
			buf->append(($nc(line)->charAt(i) == u'\t') ? "\t"_s : " "_s);
		}
		buf->append($(indent("^"_s, nSpaces)));
	}
	return buf->toString();
}

$String* AbstractDiagnosticFormatter::formatLintCategory($JCDiagnostic* d, $Locale* l) {
	$Lint$LintCategory* lc = $nc(d)->getLintCategory();
	if (lc == nullptr) {
		return ""_s;
	}
	return localize(l, "compiler.warn.lintOption"_s, $$new($ObjectArray, {$of($nc(lc)->option)}));
}

$String* AbstractDiagnosticFormatter::localize($Locale* l, $String* key, $ObjectArray* args) {
	return $nc(this->messages)->getLocalizedString(l, key, args);
}

bool AbstractDiagnosticFormatter::displaySource($JCDiagnostic* d) {
	$init($DiagnosticFormatter$Configuration$DiagnosticPart);
	bool var$1 = $nc($($cast($EnumSet, $nc(this->config)->getVisible())))->contains($DiagnosticFormatter$Configuration$DiagnosticPart::SOURCE);
	$init($JCDiagnostic$DiagnosticType);
	bool var$0 = var$1 && $nc(d)->getType() != $JCDiagnostic$DiagnosticType::FRAGMENT;
	return var$0 && d->getIntPosition() != $Position::NOPOS;
}

bool AbstractDiagnosticFormatter::isRaw() {
	return false;
}

$String* AbstractDiagnosticFormatter::indentString(int32_t nSpaces) {
	$useLocalCurrentObjectStackCache();
	$var($String, spaces, "                        "_s);
	if (nSpaces <= spaces->length()) {
		return spaces->substring(0, nSpaces);
	} else {
		$var($StringBuilder, buf, $new($StringBuilder));
		for (int32_t i = 0; i < nSpaces; ++i) {
			buf->append(" "_s);
		}
		return buf->toString();
	}
}

$String* AbstractDiagnosticFormatter::indent($String* s, int32_t nSpaces) {
	$useLocalCurrentObjectStackCache();
	$var($String, indent, indentString(nSpaces));
	$var($StringBuilder, buf, $new($StringBuilder));
	$var($String, nl, ""_s);
	{
		$var($StringArray, arr$, $nc(s)->split("\n"_s));
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, line, arr$->get(i$));
			{
				buf->append(nl);
				buf->append($$str({indent, line}));
				$assign(nl, "\n"_s);
			}
		}
	}
	return buf->toString();
}

$DiagnosticFormatter$Configuration* AbstractDiagnosticFormatter::getConfiguration() {
	return this->config;
}

$Printer* AbstractDiagnosticFormatter::getPrinter() {
	return this->printer;
}

void AbstractDiagnosticFormatter::setPrinter($Printer* printer) {
	$set(this, printer, printer);
}

$String* AbstractDiagnosticFormatter::formatPosition($Diagnostic* d, $DiagnosticFormatter$PositionKind* pk, $Locale* l) {
	return this->formatPosition($cast($JCDiagnostic, d), pk, l);
}

$String* AbstractDiagnosticFormatter::formatSource($Diagnostic* d, bool fullname, $Locale* l) {
	return this->formatSource($cast($JCDiagnostic, d), fullname, l);
}

$String* AbstractDiagnosticFormatter::formatKind($Diagnostic* d, $Locale* l) {
	return this->formatKind($cast($JCDiagnostic, d), l);
}

$String* AbstractDiagnosticFormatter::format($Diagnostic* d, $Locale* locale) {
	return this->format($cast($JCDiagnostic, d), locale);
}

bool AbstractDiagnosticFormatter::displaySource($Diagnostic* d) {
	return this->displaySource($cast($JCDiagnostic, d));
}

AbstractDiagnosticFormatter::AbstractDiagnosticFormatter() {
}

$Class* AbstractDiagnosticFormatter::load$($String* name, bool initialize) {
	$loadClass(AbstractDiagnosticFormatter, name, initialize, &_AbstractDiagnosticFormatter_ClassInfo_, allocate$AbstractDiagnosticFormatter);
	return class$;
}

$Class* AbstractDiagnosticFormatter::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com