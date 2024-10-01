# CPP_course



## System instalation

uppdatera path i en enskild terminal. Ändringen försvinner med start av ny terminal 
```ps
$env:Path += ';C:\msys64\ucrt64\bin' 
```
uppdatera path för en user/användare parmanent även efter att datorn startar om.

```ps
[Environment]::SetEnvironmentVariable("Path", $env:Path + ";C:\msys64\ucrt64\bin", [System.EnvironmentVariableTarget]::User)
```
