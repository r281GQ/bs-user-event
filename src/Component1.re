[@react.component]
let make = () => {
  let (isVisible, setIsVisible) = React.useState(() => true);

  <React.Fragment>
    {isVisible ? <div> "message here"->React.string </div> : React.null}
    <button onClick={_ => setIsVisible(prev => !prev)}>
      "toggle"->React.string
    </button>
  </React.Fragment>;
};