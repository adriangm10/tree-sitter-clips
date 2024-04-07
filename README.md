# tree-sitter-clips

Tree sitter grammar for clips, a language you probably never heard off.

The goal is to complete it enough to use it in neovim for a college class, I'll be implementing features as I need them so the parser probably won't be fully complete.

### TODO:

- [ ] defclass-construct
- [ ] defmessage-handler-construct
- [ ] definstances-construct
- [ ] defmodule-construct

### BUGS:

- When creating template facts the parser can't differenciate if it's an ordered_rhs_pattern or a template_rhs_pattern because the language is ambiguous.

For example when doing:
```
(assert (piece (posx 1)(posy 1)))
```

The parser can think that posx and posy are functions and that you are asserting an ordered fact.
