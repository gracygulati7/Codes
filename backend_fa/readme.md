# backend fa1

## Client-Server Architecture
 
Client-Server Architecture is a network design model where services are
provided by servers and requested by clients. This model divides tasks
between providers (servers) and requesters (clients), leading to efficient
resource utilization and centralized management.

####  Key Components:

 1. Client: requests services or resources from a server. it initiates a request and displays or processes the data received from the server.
 2. Server: provides services or resources to clients over a network. it listens for requests from clients, processes these requests, and returns the appropriate response.

##  How Requests are Handled at the Server

1. **request reception :**  server listens to client requests on particular ports and establishes connection to handle communication (eg port 80 for http requests)
2. **request processing :** When the server receives a request, it examines the method (GET, POST, etc.), headers, and body to understand the client's needs, then performs the necessary operations and responds accordingly.
3. **Generating Response :**  After processing the request, the server generates a response which includes status code (200 ok, 404 not found), headers (containing metadata), body (contains actual data like html content or json data)
4. **Sending Response :** The server sends the response back to the client over the established connection. Depending on the protocol, the server may close the connection or keep it open for further requests.
5. **Logging and Monitoring :** Servers keep a record of requests and responses to track how they're performing, identify issues, and ensure everything is running smoothly. This helps in monitoring server health, fixing problems, and keeping an audit trail.

 ### Protocols and Communication:
 ● HTTP/HTTPS: Used by web servers for transferring web pages. <br>
   HTTPS adds a layer of security through encryption.<br>
 ● FTP:Used for file transfers between clients and servers. <br>
 ● SMTP/IMAP/POP3: Used for email services.
 
 ### Types of Servers:
1. Web Servers: Handle HTTP requests and serve web pages.
 2. Database Servers: Manage and respond to database queries.
 3. File Servers: Store and provide access to files over a network.
 4. Application Servers: Provide a platform for running application
 services

###  Different Types of Client-Server Architecture: 

| **Feature**                  | **1-Tier Architecture**                                               | **2-Tier Architecture**                                                   | **3-Tier Architecture**                                                      | **N-Tier Architecture**                                                      |
|------------------------------|-----------------------------------------------------------------------|---------------------------------------------------------------------------|------------------------------------------------------------------------------|------------------------------------------------------------------------------|
| **Definition**               | All components (presentation, logic, data) in a single unit           | Divided into client (presentation, logic) and server (data) layers         | Separated into three layers: presentation, business logic, and data          | Extends 3-Tier with additional layers for more granular control               |
| **System Structure**         | Single system                                                         | Client and server                                                         | Client, application server (middleware), and database server                 | Multiple layers, each handling specific functions                             |
| **Client-Server Role**       | Combined into one application                                         | Client handles presentation and logic; server handles data                 | Client handles presentation; middleware handles logic; database server manages data | Multiple layers handle distinct roles, enhancing performance and flexibility  |
| **Data Management**          | Local data storage and processing                                     | Data managed by a separate server                                         | Data managed by a separate database server                                   | Data management may include additional layers for integration and optimization|
| **Scalability**              | Limited                                                               | Moderate                                                                  | Enhanced; each layer can be scaled independently                             | High; each layer can be optimized and scaled independently                    |
| **Security**                 | Basic                                                                 | Moderate                                                                  | Enhanced; security controls at each layer                                    | High; complex security controls across multiple layers                        |
| **Example**                  | Local desktop application (e.g., database manager)                   | Desktop login application (client handles UI and logic; server handles data) | Smartphone app with separate UI, middleware, and database servers            | E-commerce platform with layers for presentation, logic, data, and integration|
| **Complexity**               | Simple                                                                | Moderate                                                                  | More complex; involves multiple servers                                      | High; involves multiple layers and requires careful design and management     |
| **Offline Capability**       | Often operates offline                                                | Limited, usually requires server connection                               | Rarely offline; depends on the architecture                                  | Rarely offline; more complex integration with various services               |
| **Communication**            | No client-server communication needed                                 | Client-server communication required                                      | Communication between client, middleware, and database                       | Communication across multiple layers, including potential third-party services|

# Node.js

- Node.js is designed to build scalable network applications

**Key Features :**
1. Event-Driven, Non-Blocking I/O Model: This focuses on how Node.js handles tasks. It emphasizes that Node.js responds to events (like incoming requests) and doesn't block the execution of code while waiting for I/O operations (like reading a file) to complete. This model makes Node.js efficient and able to handle many tasks simultaneously.
2. Single-Threaded with Asynchronous I/O: This highlights that Node.js runs on a single thread, meaning it has one main path of execution. Despite this, it can handle multiple tasks at once by using asynchronous I/O, which allows it to start a task, move on to other tasks, and then come back to the first task when it's done.
3. Built on V8 Engine: Node.js is built on Google Chrome’s V8 JavaScript engine, which compiles JavaScript to native machine code for high performance.
4. npm(NodePackage Manager): Node.js comes with npm, a package manager that provides access to a vast repository of open-source libraries and modules.

(*summary-* event-driven architecture, non-blocking i/o model, single threaded with asynchronous i/o, uses chrome's v8 engine, includes npm).

**Advantages :**
1. Performance and Scalability (Non-Blocking I/O, Event Loop)
2. Single JS Language for Frontend and Backend (client and server)
3. Large Ecosystem and Community (npm)
4. Real-Time Capabilities
5. Microservices and Scalability (scalable, distributed systems)
6. Cross-Platform Development (easy deployment)

**Disadvantages :**
1. Single-Threaded Limitations (CPU-Intensive Tasks)
2. Callback Hell (Nested Callbacks)
3. Immaturity of Ecosystem (evolving libraries)
4. Learning Curve for New Developers (Asynchronous Programming- good understanding of callbacks, promises, and async/await)
5. Memory Leaks

###  Comparison with Other Languages :

| **Language**        | **Pros**                                                                                           | **Cons**                                                                                                    |
|---------------------|----------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------|
| **Python**          | - Readable and simple syntax, making it easy to learn and use                                      | - Global Interpreter Lock (GIL) can be a bottleneck for multi-threaded applications                          |
|                     | - Rich ecosystem for scientific computing and data analysis                                        | - Generally slower than Node.js for I/O operations due to its synchronous nature                            |
| **Java**            | - Strong performance, scalability, and a mature ecosystem with extensive libraries and frameworks  | - Can be more verbose and complex compared to JavaScript in Node.js                                         |
|                     | - Built-in multi-threading support                                                                 | - Higher memory footprint                                                                                   |
| **Ruby (Ruby on Rails)** | - Developer-friendly conventions and rapid application development                             | - Can suffer from performance issues and be slower than Node.js applications, especially under high concurrency |
| **PHP**             | - Widely used for web development with a large ecosystem                                           | - Performance can lag behind Node.js in handling real-time applications                                     |
|                     | - Relatively easy to deploy with strong support for web-related tasks                              | - Less modern language structure compared to JavaScript                                                     |

**NOTE:**  Whenever a new request is received, the request event is called, providing two objects: a request (an http.IncomingMessage object) and a response (an http.ServerResponse object). Those 2 objects are essential to handle the HTTP call. The first provides the request details. The second is used to return data to the caller.

## npm 

- npm is the package manager for Node.js. 
- It is used to manage packages (libraries or modules) that your Node.js application depends on. 
- npm helps you install, update, and manage these packages, making it easier to work with third-party libraries and tools

**Key Features :**
1. package management
2. scripts (allows you to define scripts in your package.json file to automate tasks like starting the server, running tests, or building the project Example: "start": "node index.js" runs index.js when you run npm start)
3. Versioning (Manage versions of packages using semantic versioning.)
4. installs global and local packages 
5. Configuration (package.json file stores metadata about your project,including dependencies, scripts, and other configurations.)

# Express.js

- a web application framework for Node.js that simplifies the process of building server-side applications and APIs
- provides a set of robust features to handle HTTP requests, route requests, and manage middleware

**Key Features :**
1. Middleware (functions that have access to the request (req), response (res), and the next middleware function in the application's request-response cycle)
2. Routing (lets you set up routes to handle different types of HTTP requests, like GET, POST, PUT, and DELETE. Each route is linked to a specific URL path and method, allowing you to define what should happen when someone accesses that path using a particular method.)
3. Request Handling (simplifies handling different HTTP requests and responses. You can define how to handle incoming requests, including sending responses back to the client.)
4. Static File Serving (Express can serve static files (like HTML, CSS, JavaScript) from a directory)
5. Error Handling (provides a simple way to handle errors and respond with appropriate messages and status codes)

[create - post, read (all,specific) - get, updation - put/patch, deletion - delete]

### Project Setup:

1. `npm init -y` # Initializes a new Node.js project
- This will create a package.json file in your directory, which will manage your project's dependencies and settings.
2. Install Dependencies
- Install necessary Node.js packages using npm (Node Package
 Manager). `npm i express nodemon`.
-  express is the framework you’ll use to build your web server and handle routing.
- nodemon is a utility that monitors for changes in your source code and automatically restarts the server. It's useful for development
3. Create Server Entry File
- Create an index.js file in the root of your project. This will be your main server file. 
- Adding a Start Script in package.json (start server by `npm start`)

__NOTE:__
- modules are JavaScript files or packages that you can use to encapsulate code. <br>
The fs module is used to handle file operations, while express provides web server capabilities
- In Node.js, you use the require function to import modules <br>
`const express = require('express');` <br>
`const fs = require('fs');` <br>
express is imported to create the web server and <br>
fs is used for file system operations (e.g., reading and writing files)

### Summary :
 1. Project Initialization: Use npm init-y to create package.json.
 2. Install Dependencies: Use npm i express nodemon.
 3. Create and Configure Server File: Create index.js, define routes,
 and add a start script in package.json.
 4. File Operations: Use fs in bookstore.js for file handling.
 5. Run the Server: Start the server using npm start

 ### MCQ:

 1. Server does not usually initiate connections to clients; instead, it waits for clients to connect and request services and then it provides and executes services and request to client.
 2. In the client-server model, client typically initiates a connection
 3. main advantage of a client-server architecture - centralized management
 4. protocol for web communication between client and server - HTTP
 5. HTTP method is used to retrieve data from a server - GET
 6. HTTP status code indicates that the request was successful - 200
 and not successful - 404 (error not found)
 7. server returns data in response to a client's request
 8. Node.js primarily used for Developing server-side applications
 9. node.js built on JS
 10. runtime environment does Node.js use : Google Chrome's V8 JavaScript Engine
 11. primary advantage of Node.js's non-blocking I/O model - Faster handling of concurrent requests
 12. core module in Node.js : fs (file system), 
 [express is framework not module]
 13. advantage of Node.js: High concurrency support
 14. disadvantage of Node.js : Single-threaded nature
 15. how Node.js handle multiple requests simultaneously : Using an event-driven, non-blocking I/O model
16. feature of Node.js allows it to handle a large number of connections with low overhead : Event-driven architecture
17. a challenge when using Node.js for CPU-intensive tasks : Single-threaded execution
18. commandis used to install Node.js on a system - `sudo apt-get install nodejs`
19. file is typically used to configure the Node.js application : package.json
20. command initializes a new Node.js project : `npm init`
21. Tostart a Node.js server, which module is commonly used : http
22. HTTP method is used to submit data to the server : POST
23. define a new route in Express : `app.get('/path', handler)`
24. the req.body property contain Request payload in an Express request
25. How do you export a function from a module in Node.js? : `module.exports = function() {}`
26.  How do you handle exceptions in Node.js? <br>
  A) Using try-catch blocks <br>
  B) Using error events <br>
  C) Using process.on('uncaughtException') <br>
  D) All of the above <br>
 Answer: D) All of the above <br>