using Microsoft.VisualStudio.TestTools.UnitTesting;
namespace Lab1Test
{
    [TestClass]
    public class MyName
    {
        [TestMethod]
        public void A()
        {
            Assert.AreEqual("My name is Vladimir", Lab1.Lab1.SayMyName("Vladimir"));
        }

        [TestMethod]
        public void B()
        {
            Assert.AreEqual("My name is Alexander", Lab1.Lab1.SayMyName("Alexander"));
        }
    }

    [TestClass]
    public class Derivative
    {
        [TestMethod]
        public void A()
        {
            float x = 1;
            float ans = -2 / (x * x * x);
            Assert.AreEqual(ans, Lab1.Lab1.f(x));
        }

        [TestMethod]
        public void B()
        {
            float x = 2;
            float ans = -2 / (x * x * x);
            Assert.AreEqual(ans, Lab1.Lab1.f(x));
        }

        [TestMethod]
        public void C()
        {
            float x = 10;
            float ans = -2 / (x * x * x);
            Assert.AreEqual(ans, Lab1.Lab1.f(x));
        }

        [TestMethod]
        public void D()
        {
            float x = -1;
            float ans = -2 / (x * x * x);
            Assert.AreEqual(ans, Lab1.Lab1.f(x));
        }
    }
}
