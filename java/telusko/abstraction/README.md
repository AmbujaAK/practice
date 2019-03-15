# **Points to remember :**

> **Abstract methods** are methods that can only be *declared , not defined*.

```java
abstract class Mobile {
    public void show(){
        System.out.println("Abstract class");
    }
    public abstract void call(); // declaration ONLY
    public abstract void song();
}
```
> **Abstract class** can have *Abstract methods*.

> You *cannot create objects* of **Abstract Class**.

> Its **Compulsory** to define all the *Abstract Methods* of abstract class in derived class

```java
class Samsung extends Mobile {
    public void call(){
        System.out.println("Calling ...")
    }
    public void song(){
        System.out.println("Singing...")
    }
}
```