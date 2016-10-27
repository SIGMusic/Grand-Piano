var Cnote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './c.wav',
        release: 1
    }
});

var Csnote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './cs.wav',
        release: 1
    }
});

var Dnote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './d.wav',
        release: 1
    }
});

var Dsnote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './ds.wav',
        release: 1
    }
});

var Enote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './e.wav',
        release: 1
    }
});

var Fnote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './f.wav',
        release: 1
    }
});

var Fsnote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './fs.wav',
        release: 1
    }
});

var Gnote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './g.wav',
        release: 1
    }
});

var Gsnote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './gs.wav',
        release: 1
    }
});

var Anote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './a.wav',
        release: 1
    }
});

var Asnote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './as.wav',
        release: 1
    }
});

var Bnote = new Pizzicato.Sound({ 
    source: 'file', 
    options: {
        path: './b.wav',
        release: 1
    }
});

document.onkeydown = function(event) {
    event = event || window.event;
    var keyCode = event.keyCode;
    switch(keyCode) {
        case 65:
            var C = Bodies.circle(40, -20, 25);
            C.restitution = .9;
            World.add(engine.world, [C])
            Cnote.play();
            setTimeout(function() {
                Cnote.stop();
            }, 500);
            break;
         case 87:
            var Cs = Bodies.circle(109, -20, 25);
            Cs.restitution = .9;
            World.add(engine.world, [Cs])
            //sineWave.frequency = 277.18;
            Csnote.play();
            setTimeout(function() {
                Csnote.stop();
            }, 500);
            break;       
         case 83:
            var D = Bodies.circle(162, -20, 25);
            D.restitution = .9;
            World.add(engine.world, [D])
            //sineWave.frequency = 293.66;
            Dnote.play();
            setTimeout(function() {
                Dnote.stop();
            }, 500);
            break;        
         case 69:
            var Ds = Bodies.circle(215, -20, 25);
            Ds.restitution = .9;
            World.add(engine.world, [Ds])
            //sineWave.frequency = 311.13;
            Dsnote.play();
            setTimeout(function() {
                Dsnote.stop();
            }, 500);
            break;
         case 68:
            var E = Bodies.circle(280, -20, 25);
            E.restitution = .9;
            World.add(engine.world, [E])
            //sineWave.frequency = 329.63;
            Enote.play();
            setTimeout(function() {
                Enote.stop();
            }, 500);
            break;
         case 70:
            var F = Bodies.circle(365, -20, 25);
            F.restitution = .9;
            World.add(engine.world, [F])
            //sineWave.frequency = 349.23;
            Fnote.play();
            setTimeout(function() {
                Fnote.stop();
            }, 500);
            break;
         case 84:
            var Fs = Bodies.circle(428, -20, 25);
            Fs.restitution = .9;
            World.add(engine.world, [Fs])
            //sineWave.frequency = 369.99;
            Fsnote.play();
            setTimeout(function() {
                Fsnote.stop();
            }, 500);
            break;
         case 71:
            var G = Bodies.circle(481, -20, 25);
            G.restitution = .9;
            World.add(engine.world, [G]);
            
            //sineWave.frequency = 392;
            Gnote.play();
            setTimeout(function() {
                Gnote.stop();
            }, 500);
            break;
         case 89:
            var Gs = Bodies.circle(534, -20, 25);
            Gs.restitution = .9;
            World.add(engine.world, [Gs]);
            
            //sineWave.frequency = 415.3;
            Gsnote.play();
            setTimeout(function() {
                Gsnote.stop();
            }, 500);
            break;
         case 72:
            var A = Bodies.circle(588, -20, 25);
            A.restitution = .9;
            World.add(engine.world, [A]);
            
            //sineWave.frequency = 440;
            Anote.play();
            setTimeout(function() {
                Anote.stop();
            }, 500);
            break;
         case 85:
            var As = Bodies.circle(642, -20, 25);
            As.restitution = .9;
            World.add(engine.world, [As]);
            
            //sineWave.frequency = 466.16;
            Asnote.play();
            setTimeout(function() {
                Asnote.stop();
            }, 500);
            break;
         case 74:
            var B = Bodies.circle(705, -20, 25);
            B.restitution = .9;
            World.add(engine.world, [B]);
            
            //sineWave.frequency = 493.88;
            Bnote.play();
            setTimeout(function() {
                Bnote.stop();
            }, 500);
            break;
        default:
    }
}


// module aliases
var Engine = Matter.Engine,
    Render = Matter.Render,
    World = Matter.World,
    Bodies = Matter.Bodies;

// create an engine
var engine = Engine.create();

// create a renderer
var render = Render.create({
    element: document.body,
    engine: engine
});

var renderOptions = render.options;
renderOptions.wireframes = false;
renderOptions.showAngleIndicator = false;
renderOptions.background = './piano.png';

// create two boxes and a ground
//var boxA = Bodies.rectangle(400, 200, 80, 80);
//var boxB = Bodies.rectangle(450, 50, 80, 80);
var ground = Bodies.rectangle(400, 610, 810, 250, { isStatic: true });
//var leftWall = Bodies.rectangle(0, 250, 60, 400, { isStatic: true});
// add all of the bodies to the world
World.add(engine.world, [ground]);

// run the engine
Engine.run(engine);

// run the renderer
Render.run(render);
