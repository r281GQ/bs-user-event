'use strict';


function click(prim, prim$1) {
  prim.click(prim$1);
  return /* () */0;
}

function typeText(prim, prim$1, prim$2, prim$3) {
  return prim.type(prim$1, prim$2, prim$3);
}

function dblClick(prim, prim$1) {
  prim.dblClick(prim$1);
  return /* () */0;
}

function selectOne(prim, prim$1, prim$2) {
  prim.selectOptions(prim$1, prim$2);
  return /* () */0;
}

function selectMany(prim, prim$1, prim$2) {
  prim.selectOptions(prim$1, prim$2);
  return /* () */0;
}

exports.click = click;
exports.typeText = typeText;
exports.dblClick = dblClick;
exports.selectOne = selectOne;
exports.selectMany = selectMany;
/* No side effect */
