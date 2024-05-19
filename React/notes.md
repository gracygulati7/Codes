# React JS
In React, both state and props are used to manage data and render components dynamically, but they serve different purposes and have distinct characteristics.

**Props** <br>
*Definition:* Props (short for properties) are read-only data that are passed from a parent component to a child component. <br>
They are used to pass information and configurations to child components. <br>
*Immutability:* Props are immutable. Once a prop is passed to a component, that component cannot change it. <br> 
Props are meant to be read-only and are primarily used to display data or call functions that were passed down. <br>
*Usage:* Props are used to pass data and event handlers to child components. They are defined and passed down by the parent component. <br>

**State** <br>
*Definition:* State is a built-in object that allows components to create and manage their own data. <br>
State is a mutable data structure that holds information about the component's current situation. It is managed within the component itself and can change over time. <br>
*Mutability:* State is mutable and can be changed using the `setState function (for class components) or the useState hook (for functional components).` <br>
State updates trigger a re-render of the component. <br>
*Usage:* State is used to manage dynamic data that affects the rendering and behavior of the component. It is defined and managed within the component itself.

**Key differences:** <br>

| Feature               | State                                         | Props                                          |
|-----------------------|-----------------------------------------------|------------------------------------------------|
| Definition            | Local data managed within the component       | Data passed from a parent component            |
| Mutability            | Mutable (can be changed)                      | Immutable (read-only)                          |
| Initialization        | Initialized within the component              | Set by the parent component                    |
| Scope                 | Scoped to the component                       | Scoped to the component hierarchy              |
| Purpose               | Manage dynamic data that affects rendering    | Pass data and event handlers to child components|
| Update Method         | `useState` (functional components) or `setState` (class components) | Cannot be changed by the child component       |
| Triggers Re-render    | Yes, when state changes                       | Yes, when props change                         |
| Accessibility         | Only accessible within the component that defines it | Accessible by the component and its children   |
| Examples              | Form input values, toggle states, etc.        | Configuration options, static data, callbacks  |
| Changes               | Controlled by the component itself            | Controlled by the parent component             |

### Examples

**State Example**:
```jsx
import React, { useState } from 'react';
const CounterComponent = () => {
  const [count, setCount] = useState(0);
  return (
    <div>
      <p>Count: {count}</p>
      <button onClick={() => setCount(count + 1)}>Increment</button>
    </div>
  );
};
```

**Props Example**:
```jsx
const ParentComponent = () => {
  const user = { name: 'Alice', age: 25 };
  return (
    <ChildComponent user={user} />
  );
};
const ChildComponent = ({ user }) => {
  return (
    <div>
      <p>Name: {user.name}</p>
      <p>Age: {user.age}</p>
    </div>
  );
};
```

###  Event Handling
React handles events similarly to DOM elements but with some differences:

React events are named using camelCase. (eg: userName). 
You pass a function as the event handler, not a string.

```
const handleClick = () => {
    alert('Button clicked!');
};

<button onClick={handleClick}>Click me</button>;
```

## Functional Components:
Functional components are basic JavaScript functions that return JSX (React's syntax for describing UI elements). <br>
They are simpler than class components and are the primary way to define components in modern React. <br>

## Class Components:
Class components are ES6 classes that extend `React.Component`.  <br>
They can hold and manage state and lifecycle methods, which provide more control over component behavior.

**Which to prefer?**
Functional components are generally preferred in modern React development due to their simplicity and the power of hooks.

*In the Past: Class Components* <br>
Preference for Class Components:

*Lifecycle Methods:* Class components were preferred because they provided a structured way to manage component lifecycle events through methods like `componentDidMount, componentDidUpdate, and componentWillUnmount`. <br>

*State Management:* Class components had built-in support for managing local state using `this.state and this.setState`. <br>

*Context Handling:* They handled context well, particularly with older versions of React where context APIs were less mature. <br>

*Community and Ecosystem:* Early React patterns, tutorials, and libraries were predominantly written for class components, making them the go-to choice for developers. <br>

*Now: Functional Components with Hooks*
Shift to Functional Components:

*Introduction of Hooks:* With the introduction of hooks in React 16.8, functional components gained the ability to manage state and side effects. <br> 
Hooks like `useState, useEffect, useContext,` and custom hooks provided the same functionality as lifecycle methods and state management in a more concise and readable way. <br>

*Simplified Code:* Functional components with hooks require less boilerplate code, making them simpler and more straightforward. <br>
There is no need for this bindings, and they avoid the verbosity associated with class components. <br>

*Performance:* Functional components can be more performant due to their lightweight nature. Hooks enable developers to optimize components more easily. <br>

*Readability and Maintainability:* The use of hooks makes functional components easier to read and maintain.  <br>
The separation of concerns is clearer, with hooks allowing side effects and state logic to be encapsulated in a more modular fashion. <br>

*Modern Best Practices:* The React community and core team now recommend functional components with hooks as the preferred way to write components. <br>
Most new tutorials, documentation, and libraries focus on functional components. <br>


## Functional component vs Class component:

| Feature                          | Functional Components                     | Class Components                            |
|----------------------------------|-------------------------------------------|---------------------------------------------|
| Definition                       | JavaScript functions                      | ES6 classes                                 |
| Syntax                           | Simple, concise                           | Verbose                                     |
| State Management                 | Uses `useState` and other hooks           | Uses `this.state` and `this.setState`       |
| Lifecycle Methods                | Uses `useEffect` and other hooks          | Uses lifecycle methods (e.g., `componentDidMount`, `componentDidUpdate`, `componentWillUnmount`) |
| Performance                      | Generally faster and lighter              | Slightly slower due to more boilerplate     |
| Boilerplate Code                 | Minimal                                   | More boilerplate code                       |
| `this` Context                   | No need to handle `this`                  | Requires binding of `this` for event handlers and methods |
| Hooks                            | Can use hooks (e.g., `useState`, `useEffect`) | Cannot use hooks                            |
| Readability                      | More readable and easier to test          | Less readable with more boilerplate         |


**Example:**                         

Functional Component:
```jsx
import React, { useState, useEffect } from 'react';

const FunctionalComponent = () => {
  const [count, setCount] = useState(0);

  useEffect(() => {
    document.title = `Count: ${count}`;
  }, [count]);

  return (
    <div>
      <p>Count: {count}</p>
      <button onClick={() => setCount(count + 1)}>Increment</button>
    </div>
  );
};
```
Class Component:
```jsx
import React, { Component } from 'react';

class ClassComponent extends Component {
  constructor(props) {
    super(props);
    this.state = { count: 0 };
  }

  componentDidMount() {
    document.title = `Count: ${this.state.count}`;
  }

  componentDidUpdate() {
    document.title = `Count: ${this.state.count}`;
  }

  incrementCount = () => {
    this.setState({ count: this.state.count + 1 });
  }

  render() {
    return (
      <div>
        <p>Count: {this.state.count}</p>
        <button onClick={this.incrementCount}>Increment</button>
      </div>
    );
  }
}
```

## React lifecycle methods :
they are special methods provided by class components that allow developers to hook into different stages of a component's lifecycle, such as mounting, updating, and unmounting. <br>
These methods enable you to execute code at specific points in the component's lifecycle.

### Lifecycle Phases

1. **Mounting**: When a component is being inserted into the DOM.
2. **Updating**: When a component is being re-rendered due to changes in props or state.
3. **Unmounting**: When a component is being removed from the DOM.
4. **Error Handling**: When there is an error during rendering, in a lifecycle method, or in the constructor of any child component.

### Mounting Phase

1. **constructor()**
   - Called before the component is mounted. It is used for initializing state and binding event handlers.
   ```jsx
   constructor(props) {
     super(props);
     this.state = { count: 0 };
   }
   ```

2. **static getDerivedStateFromProps()**
   - Invoked right before calling the render method, both on the initial mount and on subsequent updates. It should return an object to update the state, or `null` to update nothing.
   ```jsx
   static getDerivedStateFromProps(nextProps, prevState) {
     if (nextProps.someValue !== prevState.someValue) {
       return { derivedState: nextProps.someValue };
     }
     return null;
   }
   ```

3. **render()**
   - The only required method in a class component. It returns the JSX that represents the component's UI.
   ```jsx
   render() {
     return <div>{this.state.count}</div>;
   }
   ```

4. **componentDidMount()**
   - Invoked immediately after a component is mounted. It is used for initializing things like network requests, subscriptions, or setting up timers.
   ```jsx
   componentDidMount() {
     // Perform some side effect
   }
   ```

### Updating Phase

1. **static getDerivedStateFromProps()**
   - Also called during the updating phase, before the render method.

2. **shouldComponentUpdate()**
   - Determines whether the component should re-render or not. It is used for optimizing performance. It returns a boolean value.
   ```jsx
   shouldComponentUpdate(nextProps, nextState) {
     return nextProps.someValue !== this.props.someValue;
   }
   ```

3. **render()**
   - Called to re-render the component when props or state change.

4. **getSnapshotBeforeUpdate()**
   - Called right before the most recently rendered output is committed to the DOM. It allows you to capture some information (e.g., scroll position) before the DOM is potentially changed.
   ```jsx
   getSnapshotBeforeUpdate(prevProps, prevState) {
     if (prevProps.someValue !== this.props.someValue) {
       return { scrollPosition: window.scrollY };
     }
     return null;
   }
   ```

5. **componentDidUpdate()**
   - Invoked immediately after updating occurs. It is used to operate on the DOM when the component has been updated.
   ```jsx
   componentDidUpdate(prevProps, prevState, snapshot) {
     if (snapshot !== null) {
       window.scrollTo(0, snapshot.scrollPosition);
     }
   }
   ```

### Unmounting Phase

1. **componentWillUnmount()**
   - Invoked immediately before a component is unmounted and destroyed. It is used for cleanup, such as invalidating timers, canceling network requests, or cleaning up subscriptions.
   ```jsx
   componentWillUnmount() {
     // Cleanup code here
   }
   ```

### Error Handling Phase

1. **static getDerivedStateFromError()**
   - Invoked when a descendant component throws an error. It allows you to update state so the next render will show an error UI.
   ```jsx
   static getDerivedStateFromError(error) {
     return { hasError: true };
   }
   ```

2. **componentDidCatch()**
   - Called after an error has been thrown by a descendant component. It is used to log error information.
   ```jsx
   componentDidCatch(error, info) {
     // Log error here
   }
   ```

### Example: Full Lifecycle Component

```jsx
import React, { Component } from 'react';

class LifecycleDemo extends Component {
  constructor(props) {
    super(props);
    this.state = { count: 0 };
    console.log('constructor');
  }

  static getDerivedStateFromProps(nextProps, prevState) {
    console.log('getDerivedStateFromProps');
    return null; // or an object to update state
  }

  componentDidMount() {
    console.log('componentDidMount');
  }

  shouldComponentUpdate(nextProps, nextState) {
    console.log('shouldComponentUpdate');
    return true;
  }

  getSnapshotBeforeUpdate(prevProps, prevState) {
    console.log('getSnapshotBeforeUpdate');
    return null; // or some value to pass to componentDidUpdate
  }

  componentDidUpdate(prevProps, prevState, snapshot) {
    console.log('componentDidUpdate');
  }

  componentWillUnmount() {
    console.log('componentWillUnmount');
  }

  render() {
    console.log('render');
    return (
      <div>
        <p>Count: {this.state.count}</p>
        <button onClick={() => this.setState({ count: this.state.count + 1 })}>
          Increment
        </button>
      </div>
    );
  }
}

export default LifecycleDemo;
```

### Summary

- **Mounting**: `constructor()`, `getDerivedStateFromProps()`, `render()`, `componentDidMount()`
- **Updating**: `getDerivedStateFromProps()`, `shouldComponentUpdate()`, `render()`, `getSnapshotBeforeUpdate()`, `componentDidUpdate()`
- **Unmounting**: `componentWillUnmount()`
- **Error Handling**: `getDerivedStateFromError()`, `componentDidCatch()`

These lifecycle methods allow you to hook into specific points of a component's lifecycle, providing fine-grained control over its behavior and state management. However, with the advent of hooks, much of this functionality can now be achieved in functional components, often with more concise and readable code.

## Hooks:
### What is a Hook in React?

**Definition**: Hooks are special functions that let you "hook into" React state and lifecycle features from functional components. They provide a way to use state and other React features in functional component without writing a class component.


**Purpose**: Hooks are used to:
- Manage state within functional components.
- Perform side effects such as data fetching or subscriptions.
- Access context values.
- Work with mutable values that persist across renders.
- Simplify state logic that involves multiple sub-values or complex state transitions.


### Detailed Explanation of Each Hook

1. **`useState`**
   - **Purpose**: Manages state in functional components.
   - **Usage**: Allows you to add state variables to functional components.
   - **Syntax**: `const [state, setState] = useState(initialState)`
   - **Example**:
     ```jsx
     import React, { useState } from 'react';

     const Counter = () => {
       const [count, setCount] = useState(0);

       return (
         <div>
           <p>{count}</p>
           <button onClick={() => setCount(count + 1)}>Increment</button>
         </div>
       );
     };
     ```

2. **`useEffect`**
   - **Purpose**: Performs side effects in functional components.
   - **Usage**: Allows you to run side effects (e.g., data fetching, directly updating the DOM, setting up to subscriptions, Timers) after rendering. 
   - **Basic Concept:** useEffect runs after the render is committed to the screen. It ensures that the side effect logic runs at the appropriate time, not during the rendering process.
   - **Syntax**: `useEffect(() => { effect }, [dependencies])`
    The hook takes two arguments: <br>
    *Effect Function:* The function that contains the side-effect logic. <br>
    *Dependencies Array (optional):* An array of dependencies that determine when the effect function should re-run. <br>

    -> The effect function is called after the component is rendered for the first time. <br>
    -> If the dependencies array is provided, the effect function will only re-run if one of the dependencies has changed since the last render. <br>
    -> If no dependencies array is provided, the effect function will run after every render. <br>
    -> If an empty dependencies array ([]) is provided, the effect function will run only once after the initial render. <br>

    **Key Points:**
    - useEffect is a combination of componentDidMount, componentDidUpdate, and componentWillUnmount lifecycle methods from class components.
    - It ensures that side effects are separated from rendering logic, keeping the component logic clean and declarative.
    - Proper use of the dependencies array prevents unnecessary re-execution of the effect function, enhancing performance and predictability.

    **Cleanup Example in Concept:**
    - When using subscriptions or external services, useEffect can return a cleanup function to unsubscribe or disconnect when the component unmounts or before the next effect runs. This ensures that resources are properly managed and cleaned up, preventing memory leaks.

   - **Example**:
     ```jsx
     import React, { useEffect, useState } from 'react';

     const FetchData = () => {
       const [data, setData] = useState([]);

       useEffect(() => {
         fetch('https://api.example.com/data')
           .then(response => response.json())
           .then(data => setData(data));
       }, []);

       return <div>{JSON.stringify(data)}</div>;
     };
     ```

3. **`useContext`**
   - **Purpose**: Accesses context values in functional components.
   - **Usage**: Allows you to consume context values without using the `Consumer` component.
   - **Syntax**: `const value = useContext(MyContext)`
   - **Example**:
     ```jsx
     import React, { useContext } from 'react';

     const MyContext = React.createContext();

     const DisplayContext = () => {
       const value = useContext(MyContext);
       return <div>{value}</div>;
     };

     const App = () => {
       return (
         <MyContext.Provider value="Hello World">
           <DisplayContext />
         </MyContext.Provider>
       );
     };
     ```

4. **`useReducer`**
   - **Purpose**: Manages complex state logic using reducers in functional components.
   - **Usage**: Similar to `useState`, but suitable for complex state logic involving multiple sub-values or complex state transitions.
   - **Syntax**: `const [state, dispatch] = useReducer(reducer, initialArg, init)`
   - **Example**:
     ```jsx
     import React, { useReducer } from 'react';

     const initialState = { count: 0 };

     const reducer = (state, action) => {
       switch (action.type) {
         case 'increment':
           return { count: state.count + 1 };
         case 'decrement':
           return { count: state.count - 1 };
         default:
           return state;
       }
     };

     const Counter = () => {
       const [state, dispatch] = useReducer(reducer, initialState);

       return (
         <div>
           <p>{state.count}</p>
           <button onClick={() => dispatch({ type: 'increment' })}>Increment</button>
           <button onClick={() => dispatch({ type: 'decrement' })}>Decrement</button>
         </div>
       );
     };
     ```

5. **`useRef`**
   - **Purpose**: Accesses and manipulates DOM elements or persists values across renders. 
   The useRef hook is used to create a reference to a DOM element or to store a mutable value that persists across renders without causing a re-render.
   - **Usage**: Allows you to create a mutable object that persists across renders and can hold references to DOM elements.
   - **Syntax**: `const ref = useRef(initialValue)`
   - **Example**:
     ```jsx
     import React, { useRef } from 'react';

     const FocusInput = () => {
       const inputRef = useRef();

       const focusInput = () => {
         inputRef.current.focus();
       };

       return (
         <div>
           <input ref={inputRef} type="text" />
           <button onClick={focusInput}>Focus Input</button>
         </div>
       );
     };
     ```

### Summary

- **Hooks** are functions that let you use state and other React features in functional components.
- **`useState`**: Manages local state.
- **`useEffect`**: Handles side effects.
- **`useContext`**: Accesses context values.
- **`useReducer`**: Manages complex state logic.
- **`useRef`**: Accesses DOM elements and persists mutable values across renders.

Hooks allow functional components to be just as powerful and flexible as class components, while promoting simpler and more readable code.

## NPM VS NPX:

**NPM (Node Package Manager):** <br>
A package manager for JavaScript that lets you install, share, and manage dependencies. and it covers lot of space in memory.

**NPX:** <br>
A package runner tool that comes with NPM.
Lets you execute packages without needing to install them globally.

## Props drilling 
-> it is a term used in React development to describe the process of passing data from a parent component to a deeply nested child component through multiple layers of intermediate components. This usually involves passing props through several components that do not necessarily need the data themselves, but are merely acting as intermediaries to get the data to the required component.

**Solutions to Props Drilling :** <br>
1. *Context API:* <br>
The Context API allows you to create global data that can be accessed by any component in the tree without having to pass props manually at every level.

eg: here parent createscontext() and uses provider to provide the data to required nodes and as grandchild needed to access it , so it uses usecontext() .. so this is done without having to pass the data from multiple layers of node that dosent even require that :

```
// parent component
import React, { createContext, useContext } from 'react';
const UserContext = createContext(); // 1st step

const App = () => {
  const user = { name: 'Alice' };
  return (
    <UserContext.Provider value={user}>
      <Parent />
    </UserContext.Provider> // 2nd step
  );
};

const Parent = () => <Child />;
const Child = () => <GrandChild />;

// the component that needs reuiqred data
const GrandChild = () => {
  const user = useContext(UserContext); // 3rd step
  return <div>Hello, {user.name}</div>;
};
export default App;
```

2. *State Management Libraries:* <br>
Libraries like Redux  provide more advanced state management solutions for larger applications. They help manage global state and avoid the need for props drilling.

## Create Context
- Provides a way to pass data through the component tree without having to pass props down manually at every level.
- 3 steps: createcontext(), provider, usecontext().

```
// parent component
import React, { createContext, useContext } from 'react';
const UserContext = createContext(); // 1st step
const UserProvider = ({ children }) => {
    const user = { name: 'John Doe' };
    return <UserContext.Provider value={user}>{children}</UserContext.Provider>; // 2nd step
};

// child component
const UserProfile = () => {
    const user = useContext(UserContext); // 3rd sep
    return <div>User: {user.name}</div>;
};
const App = () => (
    <UserProvider>
        <UserProfile />
    </UserProvider>
);
export default App;
```

## Redux
-> A state management library for managing and centralizing application state.  <br>
or Redux is a predictable state management library for JavaScript applications, commonly used with React. It helps you manage the state of your application in a predictable way by providing a central store and a set of rules for how the state can be updated. <br>

1. **Store:** <br>
An *object* that holds the entire state of your application. It is created using *createStore*. <br>
The Redux store holds the state of your application. When an action is dispatched, the store calls the reducer with the current state and the action. The reducer processes the action and returns a new state, which the store then saves. <br>

2. **Action:** <br>
*Objects* that describe what happened.  <br>
An action is a plain JavaScript object that describes an event or an intention to change the state. Every action has a *type property*, and it can also carry additional data (payload). <br>
```
for eg: const incrementAction = {
    type: 'INCREMENT'
};
```

3. **Reducer:** <br>
Specifies how the state changes in response to an action. <br>
The reducer is a *pure function* that takes the current state and an action as arguments, and returns a new state. The store uses the reducer to determine how the state should change in response to the action that was dispatched. <br>

4. **Dispatch:** <br>
A *function* to send actions to the store.
The dispatch function is used to send an action to the Redux store. When you call dispatch, you are informing the store that an action has occurred and that the state may need to be updated.

*getState:* A method to get the current state from the store.

*subscribe:* A method to listen for state changes


**Example Flow:** <br>
Let's put this together in a sequence: <br>

*User Interaction:* A user clicks a button in the UI to increment the counter.

*Dispatch Action:* The button click event handler dispatches an action to the store.
```
const handleIncrement = () => {
    store.dispatch({ type: 'INCREMENT' });
};
```

*Action Received by Store:* The store receives the action and passes the current state and the action to the reducer.
```
const currentState = store.getState(); // { count: 0 }
store.dispatch({ type: 'INCREMENT' });
```

*Reducer Processes Action:* The reducer function processes the action and returns the new state.
```
function counterReducer(state = initialState, action) {
    switch (action.type) {
        case 'INCREMENT':
            return { count: state.count + 1 };
        case 'DECREMENT':
            return { count: state.count - 1 };
        default:
            return state;
    }
}
```

*Store Updates State:* The store updates its state with the new state returned by the reducer. <br>
`console.log(store.getState()); // { count: 1 }`

*UI Re-renders:* The application re-renders to reflect the updated state, showing the incremented count.
