type jsUserOptions = {
  .
  "allAtOnce": Js.Nullable.t(bool),
  "delay": Js.Nullable.t(int),
};

type jsType = {
  .
  [@bs.meth] "click": Dom.element => unit,
  [@bs.meth] "dblClick": Dom.element => unit,
  [@bs.meth] "selectOptions": (Dom.element, array(string)) => unit,
  [@bs.meth]
  "_type": (Dom.element, string, jsUserOptions) => Js.Promise.t(unit),
};

[@bs.module "@testing-library/user-event"]
external userEvent: jsType = "default";

type options = {
  allAtOnce: option(bool),
  delay: option(int),
};

type userEvents = {
  click: Dom.element => unit,
  dblClick: Dom.element => unit,
  selectOptions: (Dom.element, array(string)) => unit,
  typeText: (Dom.element, string, options) => Js.Promise.t(unit),
};

let h = {
  click: element => userEvent##click(element),
  dblClick: element => userEvent##dblClick(element),
  selectOptions: (element, strings) =>
    userEvent##selectOptions(element, strings),
  typeText: (element, text, options) =>
    userEvent##_type(
      element,
      text,
      {
        "allAtOnce": Js.Nullable.fromOption(options.allAtOnce),
        "delay": Js.Nullable.fromOption(options.delay),
      },
    ),
};
open ReactTestingLibrary;

open Jest;
open Expect;

test("", () => {
  let res = render(<Component1 />);

  let u = getByText(~matcher=`Str("toggle"), res);
  let t = getByText(~matcher=`Str("message here"), res);

  Js.log(t);

  // h.click(u);
  let s = getByText(~matcher=`Str("message here"), res);

  Js.log(s);

  expect(true) |> toBe(true);
});