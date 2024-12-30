
### Minitalk💬💬💬💬
<details> 
 <summary><strong>Project Overview</strong></summary><br>

  The **minitalk** project involves creating a simple communication program where a **client** and **server** interact via signals. The **server** must be started first and will print its **PID** (Process ID) to the console. The **client** will take two parameters:

  1. The **server's PID**.
  2. The **string** to send to the server.

  Once the client sends the string, the server will quickly display the received string, using signal-based communication.
  
</details>
<details>  <summary><strong> How It Works </strong></summary><br>

1. **Server**: 
   - Starts and prints its **PID**.
   - Waits for the string to be sent by the client.

2. **Client**:
   - Takes the **PID** of the server and the message string.
   - Sends the string to the server by transmitting each bit as a signal.
   - The server decodes the signals to reconstruct the string and prints it.
</details>
<details>  <summary><strong> Key Features </strong></summary><br>
 -Signal-based Communication: Uses SIGUSR1 and SIGUSR2 signals to send data. <br>
- Efficiency: The server processes the signals quickly to display the received string.
</details>
  
---







<p align="center">
  <img src="https://github.com/user-attachments/assets/1b44f461-4894-48ff-a1ac-b27d8b3eb539" width="600" alt="image" style="transition: transform 0.3s ease-in-out;"/>
</p>




