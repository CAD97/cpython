/*[clinic input]
preserve
[clinic start generated code]*/

#if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)
#  include "pycore_gc.h"            // PyGC_Head
#  include "pycore_runtime.h"       // _Py_ID()
#endif


PyDoc_STRVAR(warnings_warn__doc__,
"warn($module, /, message, category=None, stacklevel=1, source=None)\n"
"--\n"
"\n"
"Issue a warning, or maybe ignore it or raise an exception.");

#define WARNINGS_WARN_METHODDEF    \
    {"warn", _PyCFunction_CAST(warnings_warn), METH_FASTCALL|METH_KEYWORDS, warnings_warn__doc__},

static PyObject *
warnings_warn_impl(PyObject *module, PyObject *message, PyObject *category,
                   Py_ssize_t stacklevel, PyObject *source);

static PyObject *
warnings_warn(PyObject *module, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    #define NUM_KEYWORDS 4
    #if NUM_KEYWORDS == 0

    #  if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)
    #    define KWTUPLE (PyObject *)&_Py_SINGLETON(tuple_empty)
    #  else
    #    define KWTUPLE NULL
    #  endif

    #else  // NUM_KEYWORDS != 0
    #  if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)

    static struct {
        PyGC_Head _this_is_not_used;
        PyObject_VAR_HEAD
        PyObject *ob_item[NUM_KEYWORDS];
    } _kwtuple = {
        .ob_base = PyVarObject_HEAD_INIT(&PyTuple_Type, NUM_KEYWORDS)
        .ob_item = { &_Py_ID(message), &_Py_ID(category), &_Py_ID(stacklevel), &_Py_ID(source), },
    };
    #  define KWTUPLE (&_kwtuple.ob_base.ob_base)

    #  else  // !Py_BUILD_CORE
    #    define KWTUPLE NULL
    #  endif  // !Py_BUILD_CORE
    #endif  // NUM_KEYWORDS != 0
    #undef NUM_KEYWORDS

    static const char * const _keywords[] = {"message", "category", "stacklevel", "source", NULL};
    static _PyArg_Parser _parser = {
        .keywords = _keywords,
        .fname = "warn",
        .kwtuple = KWTUPLE,
    };
    #undef KWTUPLE
    PyObject *argsbuf[4];
    Py_ssize_t noptargs = nargs + (kwnames ? PyTuple_GET_SIZE(kwnames) : 0) - 1;
    PyObject *message;
    PyObject *category = Py_None;
    Py_ssize_t stacklevel = 1;
    PyObject *source = Py_None;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser, 1, 4, 0, argsbuf);
    if (!args) {
        goto exit;
    }
    message = args[0];
    if (!noptargs) {
        goto skip_optional_pos;
    }
    if (args[1]) {
        category = args[1];
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (args[2]) {
        {
            Py_ssize_t ival = -1;
            PyObject *iobj = _PyNumber_Index(args[2]);
            if (iobj != NULL) {
                ival = PyLong_AsSsize_t(iobj);
                Py_DECREF(iobj);
            }
            if (ival == -1 && PyErr_Occurred()) {
                goto exit;
            }
            stacklevel = ival;
        }
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    source = args[3];
skip_optional_pos:
    return_value = warnings_warn_impl(module, message, category, stacklevel, source);

exit:
    return return_value;
}

PyDoc_STRVAR(warnings_warn_explicit__doc__,
"warn_explicit($module, /, message, category, filename, lineno,\n"
"              module=<unrepresentable>, registry=None,\n"
"              module_globals=None, source=None)\n"
"--\n"
"\n"
"Issue a warning, or maybe ignore it or raise an exception.");

#define WARNINGS_WARN_EXPLICIT_METHODDEF    \
    {"warn_explicit", _PyCFunction_CAST(warnings_warn_explicit), METH_FASTCALL|METH_KEYWORDS, warnings_warn_explicit__doc__},

static PyObject *
warnings_warn_explicit_impl(PyObject *module, PyObject *message,
                            PyObject *category, PyObject *filename,
                            int lineno, PyObject *mod, PyObject *registry,
                            PyObject *module_globals, PyObject *sourceobj);

static PyObject *
warnings_warn_explicit(PyObject *module, PyObject *const *args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    #define NUM_KEYWORDS 8
    #if NUM_KEYWORDS == 0

    #  if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)
    #    define KWTUPLE (PyObject *)&_Py_SINGLETON(tuple_empty)
    #  else
    #    define KWTUPLE NULL
    #  endif

    #else  // NUM_KEYWORDS != 0
    #  if defined(Py_BUILD_CORE) && !defined(Py_BUILD_CORE_MODULE)

    static struct {
        PyGC_Head _this_is_not_used;
        PyObject_VAR_HEAD
        PyObject *ob_item[NUM_KEYWORDS];
    } _kwtuple = {
        .ob_base = PyVarObject_HEAD_INIT(&PyTuple_Type, NUM_KEYWORDS)
        .ob_item = { &_Py_ID(message), &_Py_ID(category), &_Py_ID(filename), &_Py_ID(lineno), &_Py_ID(module), &_Py_ID(registry), &_Py_ID(module_globals), &_Py_ID(source), },
    };
    #  define KWTUPLE (&_kwtuple.ob_base.ob_base)

    #  else  // !Py_BUILD_CORE
    #    define KWTUPLE NULL
    #  endif  // !Py_BUILD_CORE
    #endif  // NUM_KEYWORDS != 0
    #undef NUM_KEYWORDS

    static const char * const _keywords[] = {"message", "category", "filename", "lineno", "module", "registry", "module_globals", "source", NULL};
    static _PyArg_Parser _parser = {
        .keywords = _keywords,
        .fname = "warn_explicit",
        .kwtuple = KWTUPLE,
    };
    #undef KWTUPLE
    PyObject *argsbuf[8];
    Py_ssize_t noptargs = nargs + (kwnames ? PyTuple_GET_SIZE(kwnames) : 0) - 4;
    PyObject *message;
    PyObject *category;
    PyObject *filename;
    int lineno;
    PyObject *mod = NULL;
    PyObject *registry = Py_None;
    PyObject *module_globals = Py_None;
    PyObject *sourceobj = Py_None;

    args = _PyArg_UnpackKeywords(args, nargs, NULL, kwnames, &_parser, 4, 8, 0, argsbuf);
    if (!args) {
        goto exit;
    }
    message = args[0];
    category = args[1];
    if (!PyUnicode_Check(args[2])) {
        _PyArg_BadArgument("warn_explicit", "argument 'filename'", "str", args[2]);
        goto exit;
    }
    if (PyUnicode_READY(args[2]) == -1) {
        goto exit;
    }
    filename = args[2];
    lineno = _PyLong_AsInt(args[3]);
    if (lineno == -1 && PyErr_Occurred()) {
        goto exit;
    }
    if (!noptargs) {
        goto skip_optional_pos;
    }
    if (args[4]) {
        mod = args[4];
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (args[5]) {
        registry = args[5];
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    if (args[6]) {
        module_globals = args[6];
        if (!--noptargs) {
            goto skip_optional_pos;
        }
    }
    sourceobj = args[7];
skip_optional_pos:
    return_value = warnings_warn_explicit_impl(module, message, category, filename, lineno, mod, registry, module_globals, sourceobj);

exit:
    return return_value;
}
/*[clinic end generated code: output=264258fa6b1b0c36 input=a9049054013a1b77]*/
